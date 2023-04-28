# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_costmap_2d/test/unit
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/nav2_costmap_2d/test/unit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(array_parser_test "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_costmap_2d/test_results/nav2_costmap_2d/array_parser_test.gtest.xml" "--package-name" "nav2_costmap_2d" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_costmap_2d/ament_cmake_gtest/array_parser_test.txt" "--command" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_costmap_2d/test/unit/array_parser_test" "--gtest_output=xml:/home/iju/S08P31C208/ROS/robot_ws/build/nav2_costmap_2d/test_results/nav2_costmap_2d/array_parser_test.gtest.xml")
set_tests_properties(array_parser_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_costmap_2d/test/unit/array_parser_test" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_costmap_2d")
subdirs("../../gtest")
