# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_amcl
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/cppcheck.xunit.xml" "--package-name" "nav2_amcl" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/dashing/bin/ament_cppcheck" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/cppcheck.xunit.xml" "--include_dirs" "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_amcl/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_amcl")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/flake8.xunit.xml" "--package-name" "nav2_amcl" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/ament_flake8/flake8.txt" "--command" "/opt/ros/dashing/bin/ament_flake8" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_amcl")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/lint_cmake.xunit.xml" "--package-name" "nav2_amcl" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_amcl")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/pep257.xunit.xml" "--package-name" "nav2_amcl" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/ament_pep257/pep257.txt" "--command" "/opt/ros/dashing/bin/ament_pep257" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_amcl")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/uncrustify.xunit.xml" "--package-name" "nav2_amcl" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/dashing/bin/ament_uncrustify" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_amcl")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/xmllint.xunit.xml" "--package-name" "nav2_amcl" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_amcl/test_results/nav2_amcl/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_amcl")
subdirs("src/pf")
subdirs("src/map")
subdirs("src/motion_model")
subdirs("src/sensors")
subdirs("test")
