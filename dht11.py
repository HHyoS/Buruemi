import time
import Jetson.GPIO as GPIO

DHT_PIN = 12  # 핀 번호를 변경하세요.

GPIO.setmode(GPIO.BOARD)
GPIO.setup(DHT_PIN, GPIO.IN)

def read_dht11():
    GPIO.setup(DHT_PIN, GPIO.OUT)
    GPIO.output(DHT_PIN, 0)
    time.sleep(0.018)
    GPIO.setup(DHT_PIN, GPIO.IN)
    print("1")
    count = 0
    while GPIO.input(DHT_PIN) == 1 and count < 100000:
        print(count)
        count += 1
    bits = []
    for i in range(41):
        count = 0
        while GPIO.input(DHT_PIN) == 0 and count < 100000:
            print(count)
            count += 1
        print("3333")
        count = 0
        while GPIO.input(DHT_PIN) == 1 and count < 100000:
            count += 1
        bits.append(count)
    print("2222")
    return bits

while True:
    print("real")
    bits = read_dht11()
    print("test")
    if len(bits) == 41:
        humidity = (bits[0] << 8) + bits[1]
        temperature = ((bits[2] & 0x7F) << 8) + bits[3]
        if bits[2] & 0x80:
            temperature = -temperature
        checksum = sum(bits[:8]) & 0xFF
        if checksum == bits[8]:
            print("Temp={0:0.1f}C  Humidity={1:0.1f}%".format(temperature / 10, humidity / 10))
    time.sleep(2)
