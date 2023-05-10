# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/copyright.xunit.xml" "--package-name" "nav2_system_tests" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/ament_copyright/copyright.txt" "--command" "/opt/ros/dashing/bin/ament_copyright" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/cppcheck.xunit.xml" "--package-name" "nav2_system_tests" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/dashing/bin/ament_cppcheck" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/cppcheck.xunit.xml")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/cpplint.xunit.xml" "--package-name" "nav2_system_tests" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/ament_cpplint/cpplint.txt" "--command" "/opt/ros/dashing/bin/ament_cpplint" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/flake8.xunit.xml" "--package-name" "nav2_system_tests" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/ament_flake8/flake8.txt" "--command" "/opt/ros/dashing/bin/ament_flake8" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/lint_cmake.xunit.xml" "--package-name" "nav2_system_tests" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/pep257.xunit.xml" "--package-name" "nav2_system_tests" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/ament_pep257/pep257.txt" "--command" "/opt/ros/dashing/bin/ament_pep257" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/uncrustify.xunit.xml" "--package-name" "nav2_system_tests" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/dashing/bin/ament_uncrustify" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/xmllint.xunit.xml" "--package-name" "nav2_system_tests" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/test_results/nav2_system_tests/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests")
subdirs("src/planning")
subdirs("src/localization")
subdirs("src/system")
subdirs("src/updown")