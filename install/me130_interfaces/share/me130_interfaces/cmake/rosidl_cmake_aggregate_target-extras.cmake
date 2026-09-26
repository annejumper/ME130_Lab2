# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target me130_interfaces::me130_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${me130_interfaces_TARGETS}.
if(me130_interfaces_TARGETS AND NOT TARGET me130_interfaces::me130_interfaces)
  add_library(me130_interfaces::me130_interfaces INTERFACE IMPORTED)
  set_target_properties(me130_interfaces::me130_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${me130_interfaces_TARGETS}")
endif()
