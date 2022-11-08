# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_random_trajectory_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED random_trajectory_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(random_trajectory_FOUND FALSE)
  elseif(NOT random_trajectory_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(random_trajectory_FOUND FALSE)
  endif()
  return()
endif()
set(_random_trajectory_CONFIG_INCLUDED TRUE)

# output package information
if(NOT random_trajectory_FIND_QUIETLY)
  message(STATUS "Found random_trajectory: 0.0.0 (${random_trajectory_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'random_trajectory' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${random_trajectory_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(random_trajectory_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${random_trajectory_DIR}/${_extra}")
endforeach()
