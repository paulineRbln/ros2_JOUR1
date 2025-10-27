import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/student/Documents/ros2_JOUR1/ros2_ws/install/exercices'
