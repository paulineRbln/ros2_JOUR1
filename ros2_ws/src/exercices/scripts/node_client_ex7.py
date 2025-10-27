#!/usr/bin/env python3
import rclpy
import sys
from rclpy.node import Node
import socket
import os

from std_msgs.msg import String
from ctypes import c_int32
from exercices.msg import ComputerInfo
from exercices.srv import ControlClient

class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_publisher_ex7')
        self.cli = self.create_client(ControlClient, 'control_client')

        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        
        self.req = ControlClient.Request()

        self.declare_parameter('correct_computer_name', 'student-1')
        self.declare_parameter('correct_domain_id', 1)



    def send_request(self):
        computer_name = self.get_parameter('correct_computer_name').get_parameter_value().string_value
        domain_id = self.get_parameter('correct_domain_id').get_parameter_value().integer_value

        self.req.bon_ordi = computer_name
        self.req.bon_domain = domain_id
        self.req.ordi_serveur = socket.gethostname()
        self.req.domain_serveur = c_int32(int(os.getenv('ROS_DOMAIN_ID', '0'))).value

        future = self.cli.call_async(self.req)
        return future

def main(args=None):
    rclpy.init(args=args)
    client = MinimalClientAsync()

    future = client.send_request()
    rclpy.spin_until_future_complete(client, future)
    response = future.result()
    client.get_logger().info(f'Result: {response.result}')

    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
