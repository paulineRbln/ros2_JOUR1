#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import socket
import os

from std_msgs.msg import String
from ctypes import c_int32
from exercices.msg import ComputerInfo


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher_ex4')
        self.publisher_ = self.create_publisher(ComputerInfo, 'topic4', 10)
        #timer ROS2
        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.publisher_msg)
        self.i = 0


    def publisher_msg(self):
        msg = ComputerInfo()
        msg.computer_name = socket.gethostname()
        domain_id = int(os.getenv('ROS_DOMAIN_ID', '0'))
        msg.domain_id = c_int32(domain_id).value  # assure que c'est bien int32
        msg.counter = self.i
        
        self.publisher_.publish(msg)
        self.get_logger().info(
            f"Publishing → name: {msg.computer_name}, domain: {msg.domain_id}, counter: {msg.counter}"
        )
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)


    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()