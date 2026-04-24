#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, TwistStamped

class TwistBridge(Node):
    def __init__(self):
        super().__init__('twist_bridge')
        self.sub = self.create_subscription(
            Twist,
            '/diff_drive_controller/cmd_vel1',
            self.callback,
            10)
        self.pub = self.create_publisher(
            TwistStamped,
            '/diff_drive_controller/cmd_vel',
            10)

    def callback(self, msg: Twist):
        ts = TwistStamped()
        ts.header.stamp = self.get_clock().now().to_msg()
        ts.header.frame_id = ''
        ts.twist = msg
        self.pub.publish(ts)

def main(args=None):
    rclpy.init(args=args)
    node = TwistBridge()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
