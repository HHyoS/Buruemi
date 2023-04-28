# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_recoveries/test
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/nav2_recoveries/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_recoveries "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_recoveries/test_results/nav2_recoveries/test_recoveries.gtest.xml" "--package-name" "nav2_recoveries" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_recoveries/ament_cmake_gtest/test_recoveries.txt" "--command" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_recoveries/test/test_recoveries" "--gtest_output=xml:/home/iju/S08P31C208/ROS/robot_ws/build/nav2_recoveries/test_results/nav2_recoveries/test_recoveries.gtest.xml")
set_tests_properties(test_recoveries PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_recoveries/test/test_recoveries" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_recoveries")
subdirs("../gtest")
