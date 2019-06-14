# Set the project name
project(${CMAKE_PROJECT_NAME}_include)

# Add header-only library
add_library(${PROJECT_NAME} INTERFACE)
add_library(hc::include ALIAS ${PROJECT_NAME})

# Add include directive for CMake targets
target_include_directories(${PROJECT_NAME}
    INTERFACE
        ${PROJECT_SOURCE_DIR}/honor_code
)
