# List private headers and local source files
set(HEADERS
    winnowing.h
)
set(SOURCES
    tokenizer.cpp
    winnowing.cpp
    main.cpp
)

# Create the executable
add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})

# Include the private headers
target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}
)

# Link the header-only include library and other static libraries
target_link_libraries(${CMAKE_PROJECT_NAME}
    hc::include
    hc::tokenizer
)
