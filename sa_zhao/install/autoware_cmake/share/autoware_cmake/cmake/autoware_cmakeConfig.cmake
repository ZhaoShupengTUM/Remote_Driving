# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_autoware_cmake_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED autoware_cmake_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(autoware_cmake_FOUND FALSE)
  elseif(NOT autoware_cmake_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(autoware_cmake_FOUND FALSE)
  endif()
  return()
endif()
set(_autoware_cmake_CONFIG_INCLUDED TRUE)

# output package information
if(NOT autoware_cmake_FIND_QUIETLY)
  message(STATUS "Found autoware_cmake: 0.1.0 (${autoware_cmake_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'autoware_cmake' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${autoware_cmake_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(autoware_cmake_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "autoware_cmake-extras.cmake")
foreach(_extra ${_extras})
  include("${autoware_cmake_DIR}/${_extra}")
endforeach()
