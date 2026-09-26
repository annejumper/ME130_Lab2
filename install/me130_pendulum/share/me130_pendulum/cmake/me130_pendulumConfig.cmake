# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_me130_pendulum_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED me130_pendulum_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(me130_pendulum_FOUND FALSE)
  elseif(NOT me130_pendulum_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(me130_pendulum_FOUND FALSE)
  endif()
  return()
endif()
set(_me130_pendulum_CONFIG_INCLUDED TRUE)

# output package information
if(NOT me130_pendulum_FIND_QUIETLY)
  message(STATUS "Found me130_pendulum: 1.0.0 (${me130_pendulum_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'me130_pendulum' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT me130_pendulum_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(me130_pendulum_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${me130_pendulum_DIR}/${_extra}")
endforeach()
