import rclpy
from rclpy.node import Node
import socket
import os

from std_msgs.msg import String


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        """
        #timer ROS2
        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        #compteur
        self.i = 0
        """

        #sans timer
        self.publish_once() 


    def publish_once(self):
        msg = String()
        nom_ordi = socket.gethostname()
        domain_id = os.getenv('ROS_DOMAIN_ID', '0')
        msg.data = f'Nom ordi: {nom_ordi}, Domain ID: {domain_id}'
        #, compteur : {self.i}
        
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        #self.i += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin_once(minimal_publisher, timeout_sec=1.0)

    #rclpy.spin(minimal_publisher)


    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()