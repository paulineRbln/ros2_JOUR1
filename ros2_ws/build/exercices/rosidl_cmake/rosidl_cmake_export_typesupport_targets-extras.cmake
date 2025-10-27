# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:exercices__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:exercices__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:exercices__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:exercices__rosidl_typesupport_c;__rosidl_generator_cpp:exercices__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:exercices__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:exercices__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:exercices__rosidl_typesupport_cpp;__rosidl_generator_py:exercices__rosidl_generator_py")

# populate exercices_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "exercices::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'exercices' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND exercices_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
