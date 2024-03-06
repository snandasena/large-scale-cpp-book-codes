# Add source files

file(GLOB SOURCES "*.cpp")

add_executable(project_name ${SOURCES})

# Include directories
target_include_directories(project_name PUBLIC ${CMAKE_SOURCE_DIR}/include)
