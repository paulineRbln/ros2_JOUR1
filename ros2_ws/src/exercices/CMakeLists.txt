cmake_minimum_required(VERSION 3.8)
project(exercices)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)

find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ComputerInfo.msg"
  "srv/ControlClient.srv"

)

install(PROGRAMS 
  scripts/publisher_ex1.py
  scripts/publisher_ex2.py
  scripts/publisher_ex3.py
  scripts/publisher_ex4.py
  scripts/subscriber_ex1.py
  scripts/subscriber_ex2.py
  scripts/subscriber_ex3.py
  scripts/subscriber_ex4.py
  scripts/subscriber_ex5.py
  scripts/node_ex6.py
  scripts/service_ex7.py
  scripts/node_client_ex7.py
  DESTINATION lib/${PROJECT_NAME}
  )


# ament_export_dependencies(rosidl_default_runtime)
ament_package()

