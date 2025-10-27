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
        super().__init__('minimal_publisher_ex6')

        self.declare_parameter('correct_computer_name', 'student-45257')
        self.declare_parameter('correct_domain_id', 10)


        computer_name_param = self.get_parameter('correct_computer_name').get_parameter_value().string_value
        domain_id_param = self.get_parameter('correct_domain_id').get_parameter_value().integer_value

        self.get_logger().info(f"Paramètre correct_computer_name = {computer_name_param}")
        self.get_logger().info(f"Paramètre correct_domain_id = {domain_id_param}")

        self.publisher_ = self.create_publisher(ComputerInfo, 'topic6', 10)
        self.timer = self.create_timer(1.0, self.publisher_msg)
        self.i = 0

    def publisher_msg(self):
        msg = ComputerInfo()
        msg.computer_name = socket.gethostname()
        msg.domain_id = c_int32(int(os.getenv('ROS_DOMAIN_ID', '0'))).value
        msg.counter = self.i

        self.publisher_.publish(msg)
        self.get_logger().info(
            f"Publishing → name: {msg.computer_name}, domain: {msg.domain_id}, counter: {msg.counter}"
        )
        self.i += 1


def main(args=None):
    rclpy.init(args=args)
    node = MinimalPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
