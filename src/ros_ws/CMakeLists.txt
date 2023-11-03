cmake_minimum_required(VERSION 3.5)
project(ros_ws)

find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)

set(COLCON_DEPENDENCIES
    rclcpp
    tf2
)

ament_target_dependencies(my_target COLCON_DEPENDENCIES)

install(
    DIRECTORY include/
    DESTINATION include
)

install(
    TARGETS my_library
    DESTINATION lib
)


ament_package()