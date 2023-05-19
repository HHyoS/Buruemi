
#include <iostream>
#include <chrono>
#include <thread>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/gpio.h>
#include <vector>
#include <utility>

#define DHT_PIN 78  // Jetson Nano의 GPIO 216 (Pin 7)에 DHT11 센서를 연결했다고 가정합니다.


void export_gpio(int pin) {
    int fd = open("/sys/class/gpio/export", O_WRONLY);
    if (fd < 0) {
        perror("Error exporting GPIO");
        return;
    }
    std::string pin_str = std::to_string(pin);
    write(fd, pin_str.c_str(), pin_str.length());
    close(fd);
}

void set_gpio_direction(int pin, const std::string &direction) {
    std::string path = "/sys/class/gpio/gpio" + std::to_string(pin) + "/direction";
    int fd = open(path.c_str(), O_WRONLY);
    if (fd < 0) {
        perror("Error setting GPIO direction");
        return;
    }
    write(fd, direction.c_str(), direction.length());
    close(fd);
}

int read_gpio(int pin) {
    std::string path = "/sys/class/gpio/gpio" + std::to_string(pin) + "/value";
    int fd = open(path.c_str(), O_RDONLY);
    if (fd < 0) {
        perror("Error reading GPIO value");
        return -1;
    }
    char value;
    read(fd, &value, 1);
    close(fd);
    return value == '0' ? 0 : 1;
}

std::vector<int> read_dht11(int pin) {
    std::vector<int> data;

    // Export the GPIO pin
    export_gpio(pin);

    // Send the start signal
    set_gpio_direction(pin, "out");
    int fd = open(("/sys/class/gpio/gpio" + std::to_string(pin) + "/value").c_str(), O_WRONLY);
    write(fd, "0", 1);
    usleep(18000);
    write(fd, "1", 1);
    close(fd);

    // Set the direction back to input
    set_gpio_direction(pin, "in");

    // Read data from the sensor
    while (data.size() < 83) {
        while (read_gpio(pin) == 1);
        auto start = std::chrono::high_resolution_clock::now();
        while (read_gpio(pin) == 0);
        auto end = std::chrono::high_resolution_clock::now();
        int duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
        data.push_back(duration);
    }

    return data;
}

std::pair<int, int> decode_dht11_data(const std::vector<int> &data) {
    int humidity = 0;
    int temperature = 0;

    if (data.size() < 83) {
        std::cerr << "Not enough data received from the sensor." << std::endl;
        return {-1, -1};
    }

    // Skip the initial low state
    size_t i = 0;
    while (i < data.size() && data[i] < 75) {
        ++i;
    }

    // Read the 40 bits of data
    for (int j = 0; j < 40; ++j) {
        // Wait for the start of the high state
        while (i < data.size() && data[i] < 75) {
            ++i;
        }

        // Measure the duration of the high state
        int duration = 0;
        while (i < data.size() && data[i] >= 75) {
            duration += data[i];
            ++i;
        }

        // Update the humidity and temperature values based on the bit duration
        if (j < 16) {
            humidity <<= 1;
            if (duration > 110) {
                humidity |= 1;
            }
        } else if (j < 32) {
            temperature <<= 1;
            if (duration > 110) {
                temperature |= 1;
            }
        }
    }

    return {humidity, temperature};
}

int main() {

    std::vector<int> data = read_dht11(DHT_PIN);
    std::pair<int, int> result = decode_dht11_data(data);

    int humidity = result.first;
    int temperature = result.second;

    if (humidity >= 0 && temperature >= 0) {
        std::cout << "Humidity: " << humidity << "%, Temperature: " << temperature << "°C" << std::endl;
    } else {
        std::cerr << "Failed to read data from the sensor." << std::endl;
    }

    return 0;
}
