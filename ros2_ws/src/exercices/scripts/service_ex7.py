#!/usr/bin/env python3
from exercices.srv import ControlClient

import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(ControlClient, 'control_client', self.add_control_callback)

    def add_control_callback(self, request, response):
        response.result = (request.bon_ordi == request.ordi_serveur ) and (request.bon_domain == request.domain_serveur)
        self.get_logger().info('Incoming request\nbon_ordi: %s bon_domain: %d ordinateur_reel: %s domaine_reel: %d' % (request.bon_ordi, request.bon_domain, request.ordi_serveur, request.domain_serveur))

        return response


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()