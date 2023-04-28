# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_dwb_controller/dwb_plugins/test
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/dwb_plugins/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(vtest "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/dwb_plugins/test_results/dwb_plugins/vtest.gtest.xml" "--package-name" "dwb_plugins" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/dwb_plugins/ament_cmake_gtest/vtest.txt" "--command" "/home/iju/S08P31C208/ROS/robot_ws/build/dwb_plugins/test/vtest" "--gtest_output=xml:/home/iju/S08P31C208/ROS/robot_ws/build/dwb_plugins/test_results/dwb_plugins/vtest.gtest.xml")
set_tests_properties(vtest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/iju/S08P31C208/ROS/robot_ws/build/dwb_plugins/test/vtest" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_dwb_controller/dwb_plugins")
subdirs("../gtest")
