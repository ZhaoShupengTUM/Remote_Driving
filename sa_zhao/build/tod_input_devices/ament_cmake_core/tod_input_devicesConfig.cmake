# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tod_input_devices_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tod_input_devices_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tod_input_devices_FOUND FALSE)
  elseif(NOT tod_input_devices_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tod_input_devices_FOUND FALSE)
  endif()
  return()
endif()
set(_tod_input_devices_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tod_input_devices_FIND_QUIETLY)
  message(STATUS "Found tod_input_devices: 0.1.0 (${tod_input_devices_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tod_input_devices' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tod_input_devices_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tod_input_devices_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${tod_input_devices_DIR}/${_extra}")
endforeach()
