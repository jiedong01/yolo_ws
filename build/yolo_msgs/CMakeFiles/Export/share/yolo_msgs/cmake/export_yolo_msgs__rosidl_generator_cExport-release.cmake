#----------------------------------------------------------------
# Generated CMake target import file for configuration "release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "yolo_msgs::yolo_msgs__rosidl_generator_c" for configuration "release"
set_property(TARGET yolo_msgs::yolo_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(yolo_msgs::yolo_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libyolo_msgs__rosidl_generator_c.so"
  IMPORTED_SONAME_RELEASE "libyolo_msgs__rosidl_generator_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS yolo_msgs::yolo_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_yolo_msgs::yolo_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libyolo_msgs__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)