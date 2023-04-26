import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan

class LidarFilter(Node):
    def __init__(self):
        super().__init__('lidar_filter')
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.lidar_callback,
            10)
        self.subscription  # prevent unused variable warning

    def lidar_callback(self, msg):
        # 특정 각도에 대한 데이터를 무시하려면 이 부분을 수정하세요.
        min_angle = -45.0  # 최소 각도 (도 단위)
        max_angle = 45.0  # 최대 각도 (도 단위)

        min_angle_rad = min_angle * 3.14159 / 180.0  # 라디안으로 변환
        max_angle_rad = max_angle * 3.14159 / 180.0  # 라디안으로 변환

        filtered_ranges = []

        for index, distance in enumerate(msg.ranges):
            current_angle = msg.angle_min + index * msg.angle_increment

            if min_angle_rad <= current_angle <= max_angle_rad:
                filtered_ranges.append(distance)
            else:
                filtered_ranges.append(float('inf'))

        msg.ranges = filtered_ranges
        self.get_logger().info('Filtered LIDAR data')

def main(args=None):
    rclpy.init(args=args)
    lidar_filter = LidarFilter()
    rclpy.spin(lidar_filter)

    lidar_filter.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
