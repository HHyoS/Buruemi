# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests

# Include any dependencies generated for this target.
include src/localization/CMakeFiles/test_localization_node.dir/depend.make

# Include the progress variables for this target.
include src/localization/CMakeFiles/test_localization_node.dir/progress.make

# Include the compile flags for this target's objects.
include src/localization/CMakeFiles/test_localization_node.dir/flags.make

src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o: src/localization/CMakeFiles/test_localization_node.dir/flags.make
src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests/src/localization/test_localization_node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o"
	cd /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/src/localization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o -c /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests/src/localization/test_localization_node.cpp

src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_localization_node.dir/test_localization_node.cpp.i"
	cd /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/src/localization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests/src/localization/test_localization_node.cpp > CMakeFiles/test_localization_node.dir/test_localization_node.cpp.i

src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_localization_node.dir/test_localization_node.cpp.s"
	cd /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/src/localization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests/src/localization/test_localization_node.cpp -o CMakeFiles/test_localization_node.dir/test_localization_node.cpp.s

src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o.requires:

.PHONY : src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o.requires

src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o.provides: src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o.requires
	$(MAKE) -f src/localization/CMakeFiles/test_localization_node.dir/build.make src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o.provides.build
.PHONY : src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o.provides

src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o.provides.build: src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o


# Object files for target test_localization_node
test_localization_node_OBJECTS = \
"CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o"

# External object files for target test_localization_node
test_localization_node_EXTERNAL_OBJECTS =

src/localization/test_localization_node: src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o
src/localization/test_localization_node: src/localization/CMakeFiles/test_localization_node.dir/build.make
src/localization/test_localization_node: gtest/libgtest_main.a
src/localization/test_localization_node: gtest/libgtest.a
src/localization/test_localization_node: /opt/ros/dashing/lib/libvisualization_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libvisualization_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libvisualization_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libvisualization_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libvisualization_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libvisualization_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libvisualization_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_amcl/lib/libamcl_core.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_amcl/lib/libpf_lib.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_amcl/lib/libsensors_lib.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_amcl/lib/libmotions_lib.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_amcl/lib/libmap_lib.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libsensor_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libsensor_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libsensor_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libsensor_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libsensor_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_lifecycle_manager/lib/libnav2_lifecycle_manager_core.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_util/lib/libnav2_util_core.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_util/lib/libmap_loader.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_msgs/lib/libnav2_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_msgs/lib/libnav2_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_msgs/lib/libnav2_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_msgs/lib/libnav2_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_msgs/lib/libnav2_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_msgs/lib/libnav2_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /home/iju/S08P31C208/ROS/robot_ws/install/nav2_msgs/lib/libnav2_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libnav_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libnav_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libnav_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libnav_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libnav_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libnav_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libnav_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtest_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtest_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtest_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtest_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtest_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtest_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtest_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librclcpp_action.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_action.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librclcpp_lifecycle.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_lifecycle.so
src/localization/test_localization_node: /opt/ros/dashing/lib/liblifecycle_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/liblifecycle_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/liblifecycle_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/liblifecycle_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/liblifecycle_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/liblifecycle_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/liblifecycle_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_srvs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_srvs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_srvs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_srvs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_srvs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_srvs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_srvs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/liborocos-kdl.so.1.4.0
src/localization/test_localization_node: /opt/ros/dashing/lib/libtf2_ros.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libmessage_filters.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librclcpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_interfaces__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_interfaces__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_interfaces__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librmw_implementation.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librmw.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcutils.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_logging_noop.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosgraph_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosgraph_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librcl_yaml_param_parser.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libgeometry_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libgeometry_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libbuiltin_interfaces__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libunique_identifier_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libunique_identifier_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libunique_identifier_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/librosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libaction_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libaction_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libaction_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libaction_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libaction_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtf2_msgs__rosidl_typesupport_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtf2_msgs__rosidl_typesupport_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtf2_msgs__rosidl_generator_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtf2_msgs__rosidl_typesupport_fastrtps_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtf2_msgs__rosidl_typesupport_fastrtps_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtf2_msgs__rosidl_typesupport_introspection_c.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libtf2_msgs__rosidl_typesupport_introspection_cpp.so
src/localization/test_localization_node: /opt/ros/dashing/lib/libconsole_bridge.so.0.4
src/localization/test_localization_node: /opt/ros/dashing/lib/libtf2.so
src/localization/test_localization_node: src/localization/CMakeFiles/test_localization_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_localization_node"
	cd /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/src/localization && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_localization_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/localization/CMakeFiles/test_localization_node.dir/build: src/localization/test_localization_node

.PHONY : src/localization/CMakeFiles/test_localization_node.dir/build

src/localization/CMakeFiles/test_localization_node.dir/requires: src/localization/CMakeFiles/test_localization_node.dir/test_localization_node.cpp.o.requires

.PHONY : src/localization/CMakeFiles/test_localization_node.dir/requires

src/localization/CMakeFiles/test_localization_node.dir/clean:
	cd /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/src/localization && $(CMAKE_COMMAND) -P CMakeFiles/test_localization_node.dir/cmake_clean.cmake
.PHONY : src/localization/CMakeFiles/test_localization_node.dir/clean

src/localization/CMakeFiles/test_localization_node.dir/depend:
	cd /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_system_tests/src/localization /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/src/localization /home/iju/S08P31C208/ROS/robot_ws/build/nav2_system_tests/src/localization/CMakeFiles/test_localization_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/localization/CMakeFiles/test_localization_node.dir/depend
