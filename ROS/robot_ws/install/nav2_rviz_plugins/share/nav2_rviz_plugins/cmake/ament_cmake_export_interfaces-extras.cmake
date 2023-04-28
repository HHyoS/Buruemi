# generated from ament_cmake_export_interfaces/cmake/ament_cmake_export_interfaces-extras.cmake.in

set(_exported_interfaces "nav2_rviz_plugins")

# include all exported interfaces
if(NOT _exported_interfaces STREQUAL "")
  foreach(_interface ${_exported_interfaces})
    include("${nav2_rviz_plugins_DIR}/${_interface}Export.cmake")
    list(APPEND nav2_rviz_plugins_INTERFACES "nav2_rviz_plugins::${_interface}")
  endforeach()
endif()
