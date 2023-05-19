# CMake generated Testfile for 
# Source directory: /home/iju/new_ws/S08P31C208/ROS/robot_ws/src/DynamixelSDK/dynamixel_sdk_examples
# Build directory: /home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/copyright.xunit.xml" "--package-name" "dynamixel_sdk_examples" "--output-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/ament_copyright/copyright.txt" "--command" "/opt/ros/dashing/bin/ament_copyright" "--xunit-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/new_ws/S08P31C208/ROS/robot_ws/src/DynamixelSDK/dynamixel_sdk_examples")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/cppcheck.xunit.xml" "--package-name" "dynamixel_sdk_examples" "--output-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/dashing/bin/ament_cppcheck" "--xunit-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/cppcheck.xunit.xml" "--include_dirs" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/src/DynamixelSDK/dynamixel_sdk_examples/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/iju/new_ws/S08P31C208/ROS/robot_ws/src/DynamixelSDK/dynamixel_sdk_examples")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/cpplint.xunit.xml" "--package-name" "dynamixel_sdk_examples" "--output-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/ament_cpplint/cpplint.txt" "--command" "/opt/ros/dashing/bin/ament_cpplint" "--xunit-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/iju/new_ws/S08P31C208/ROS/robot_ws/src/DynamixelSDK/dynamixel_sdk_examples")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/lint_cmake.xunit.xml" "--package-name" "dynamixel_sdk_examples" "--output-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/new_ws/S08P31C208/ROS/robot_ws/src/DynamixelSDK/dynamixel_sdk_examples")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/uncrustify.xunit.xml" "--package-name" "dynamixel_sdk_examples" "--output-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/dashing/bin/ament_uncrustify" "--xunit-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/new_ws/S08P31C208/ROS/robot_ws/src/DynamixelSDK/dynamixel_sdk_examples")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/xmllint.xunit.xml" "--package-name" "dynamixel_sdk_examples" "--output-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/iju/new_ws/S08P31C208/ROS/robot_ws/build/dynamixel_sdk_examples/test_results/dynamixel_sdk_examples/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/new_ws/S08P31C208/ROS/robot_ws/src/DynamixelSDK/dynamixel_sdk_examples")
