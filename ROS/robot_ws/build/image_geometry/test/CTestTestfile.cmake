# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/vision_opencv/image_geometry/test
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/image_geometry/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(image_geometry-utest "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/image_geometry/test_results/image_geometry/image_geometry-utest.gtest.xml" "--package-name" "image_geometry" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/image_geometry/ament_cmake_gtest/image_geometry-utest.txt" "--append-env" "LD_LIBRARY_PATH=/home/iju/S08P31C208/ROS/robot_ws/build/image_geometry" "--command" "/home/iju/S08P31C208/ROS/robot_ws/build/image_geometry/test/image_geometry-utest" "--gtest_output=xml:/home/iju/S08P31C208/ROS/robot_ws/build/image_geometry/test_results/image_geometry/image_geometry-utest.gtest.xml")
set_tests_properties(image_geometry-utest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/iju/S08P31C208/ROS/robot_ws/build/image_geometry/test/image_geometry-utest" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/vision_opencv/image_geometry")
subdirs("../gtest")
