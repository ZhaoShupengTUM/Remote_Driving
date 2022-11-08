# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_interactive_trajectory_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED interactive_trajectory_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(interactive_trajectory_FOUND FALSE)
  elseif(NOT interactive_trajectory_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(interactive_trajectory_FOUND FALSE)
  endif()
  return()
endif()
set(_interactive_trajectory_CONFIG_INCLUDED TRUE)

# output package information
if(NOT interactive_trajectory_FIND_QUIETLY)
  message(STATUS "Found interactive_trajectory: 0.0.0 (${interactive_trajectory_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'interactive_trajectory' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${interactive_trajectory_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(interactive_trajectory_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${interactive_trajectory_DIR}/${_extra}")
endforeach()
