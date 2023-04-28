# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_voxel_grid/test
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/nav2_voxel_grid/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(voxel_grid_tests "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_voxel_grid/test_results/nav2_voxel_grid/voxel_grid_tests.gtest.xml" "--package-name" "nav2_voxel_grid" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_voxel_grid/ament_cmake_gtest/voxel_grid_tests.txt" "--command" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_voxel_grid/test/voxel_grid_tests" "--gtest_output=xml:/home/iju/S08P31C208/ROS/robot_ws/build/nav2_voxel_grid/test_results/nav2_voxel_grid/voxel_grid_tests.gtest.xml")
set_tests_properties(voxel_grid_tests PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_voxel_grid/test/voxel_grid_tests" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_voxel_grid")
subdirs("../gtest")
