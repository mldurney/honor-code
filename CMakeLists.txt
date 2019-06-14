################################################################################
# Project and CMake basics
################################################################################

# Set version number
set(HC_VERSION_MAJOR "1")
set(HC_VERSION_MINOR "0")
set(HC_VERSION_PATCH "0")
set(HC_VERSION "${HC_VERSION_MAJOR}.${HC_VERSION_MINOR}.${HC_VERSION_PATCH}")

# Set the project name, version, and language
cmake_policy(SET CMP0048 NEW)
project(honor_code
        VERSION "${HC_VERSION}"
        LANGUAGES CXX)

# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.9)

# Set the output folder for executable and library binaries
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

################################################################################
# Compiler settings
################################################################################

# Activate C++17 standard for compilers
set(CMAKE_CXX_STANDARD 17)

# Set C++ compiler flags
if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    set(CMAKE_CXX_FLAGS
        "${CMAKE_CXX_FLAGS} -Wall")
    set(CMAKE_CXX_FLAGS_DEBUG
        "-O0 -g3")
    set(CMAKE_CXX_FLAGS_RELEASE
        "-O3")
    set(CMAKE_CXX_FLAGS
        "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif()

################################################################################
# Source directories
################################################################################

add_subdirectory(include)
add_subdirectory(lib)
add_subdirectory(src)
### DISABLED UNTIL TESTING IS IMPLEMENTED
# add_subdirectory(tests)

################################################################################
# Doxygen
################################################################################

### DISABLED UNTIL DOXYGEN INSTALLED

# # Doxygen Build
# option(BUILD_DOC "Build Documentation" ON)

# find_package(Doxygen)
# if(DOXYGEN_FOUND)
#     set(BUILD_DOC_DIR ${CMAKE_SOURCE_DIR}/build/docs)
#     if(NOT EXISTS ${BUILD_DOC_DIR})
#         file(MAKE_DIRECTORY ${BUILD_DOC_DIR})
#     endif()

#     set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/docs/Doxyfile)
#     set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)
#     configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)

#     message("Doxygen buld started")
#     add_custom_target(Doxygen ALL
#             COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
#             WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#             COMMENT "Generating API documentation with Doxygen"
#             VERBATIM)
# else(DOXYGEN_FOUND)
#     message("Doxygen needs to be installed to generate the documentation.")
# endif(DOXYGEN_FOUND)
