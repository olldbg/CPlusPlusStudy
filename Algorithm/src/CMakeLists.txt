include(${CMAKE_SOURCE_DIR}/cmake/Utils.cmake)

subdirlist(SUB_DIRS ${CMAKE_CURRENT_SOURCE_DIR})
foreach (SUB_DIR ${SUB_DIRS})
  add_subdirectory(${SUB_DIR})
endforeach (SUB_DIR ${SUB_DIRS})
