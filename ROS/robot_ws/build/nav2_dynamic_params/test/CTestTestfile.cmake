# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_dynamic_params/test
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/nav2_dynamic_params/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_dynamic_params_validator "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_dynamic_params/test_results/nav2_dynamic_params/test_dynamic_params_validator.gtest.xml" "--package-name" "nav2_dynamic_params" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_dynamic_params/ament_cmake_gtest/test_dynamic_params_validator.txt" "--command" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_dynamic_params/test/test_dynamic_params_validator" "--gtest_output=xml:/home/iju/S08P31C208/ROS/robot_ws/build/nav2_dynamic_params/test_results/nav2_dynamic_params/test_dynamic_params_validator.gtest.xml")
set_tests_properties(test_dynamic_params_validator PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_dynamic_params/test/test_dynamic_params_validator" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_dynamic_params")
add_test(test_dynamic_params_client "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_dynamic_params/test_results/nav2_dynamic_params/test_dynamic_params_client.xml" "--package-name" "nav2_dynamic_params" "--generate-result-on-success" "--env" "TEST_EXECUTABLE=/home/iju/S08P31C208/ROS/robot_ws/build/nav2_dynamic_params/test/test_dynamic_params_client_exec" "--command" "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_dynamic_params/test/dynamic_params_test.launch.py")
set_tests_properties(test_dynamic_params_client PROPERTIES  TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_dynamic_params/test")
subdirs("../gtest")
