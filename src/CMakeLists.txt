# Add source files

file(GLOB SOURCES "*.cpp")

add_executable(large_scale_cpp ${SOURCES})

# Include directories
target_include_directories(large_scale_cpp PUBLIC ${CMAKE_SOURCE_DIR}/include)
