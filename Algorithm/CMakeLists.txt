include(CMakePrintHelpers)

# file(GLOB_RECURSE ALG_HEADERS 
#     "${CMAKE_SOURCE_DIR}/Algorithm/include/*.h"
#     "${CMAKE_SOURCE_DIR}/Algorithm/include/*.hpp")

# cmake_print_variables(${ALG_HEADERS})

include_directories(${CMAKE_SOURCE_DIR}/Algorithm/include/)

add_subdirectory(src)

