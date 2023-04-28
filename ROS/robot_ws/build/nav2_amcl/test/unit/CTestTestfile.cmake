# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_amcl/test/unit
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test/unit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_localization_amcl "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/test_localization_amcl.gtest.xml" "--package-name" "nav2_amcl" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/ament_cmake_gtest/test_localization_amcl.txt" "--command" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test/unit/test_localization_amcl" "--gtest_output=xml:/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/test_localization_amcl.gtest.xml")
set_tests_properties(test_localization_amcl PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test/unit/test_localization_amcl" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_amcl")
subdirs("../../gtest")
