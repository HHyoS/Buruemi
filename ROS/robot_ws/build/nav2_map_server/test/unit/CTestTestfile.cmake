# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_map_server/test/unit
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/nav2_map_server/test/unit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_occ_grid "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_map_server/test_results/nav2_map_server/test_occ_grid.gtest.xml" "--package-name" "nav2_map_server" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_map_server/ament_cmake_gtest/test_occ_grid.txt" "--command" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_map_server/test/unit/test_occ_grid" "--gtest_output=xml:/home/iju/S08P31C208/ROS/robot_ws/build/nav2_map_server/test_results/nav2_map_server/test_occ_grid.gtest.xml")
set_tests_properties(test_occ_grid PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_map_server/test/unit/test_occ_grid" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_map_server")
subdirs("../../gtest")
