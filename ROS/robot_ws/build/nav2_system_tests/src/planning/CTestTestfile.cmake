# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests/src/planning
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/src/planning
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_planner "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/test_planner.xml" "--package-name" "nav2_system_tests" "--generate-result-on-success" "--env" "TEST_LAUNCH_DIR=" "TEST_EXECUTABLE=/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/src/planning/test_planner_node" "TEST_MAP=/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests/maps/map.pgm" "--command" "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests/src/planning/test_planner_launch.py")
set_tests_properties(test_planner PROPERTIES  TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/src/planning")
subdirs("../../gtest")
