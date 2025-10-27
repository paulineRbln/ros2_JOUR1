#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import socket
import os

from std_msgs.msg import String


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher_ex2')
        self.publisher_ = self.create_publisher(String, 'topic2', 10)
        #timer ROS2
        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.publisher_timer)
        self.i = 0


    def publisher_timer(self):
        msg = String()
        nom_ordi = socket.gethostname()
        domain_id = os.getenv('ROS_DOMAIN_ID', '0')
        msg.data = f'Nom ordi: {nom_ordi}, Domain ID: {domain_id}'
        
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)


    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()