# Add source files
add_executable(test_project test_main.cpp)

# Include directories
target_include_directories(test_project PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Include Google Test framework
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

# Link against Google Test and the project libraries
target_link_libraries(test_project PRIVATE gtest_main)

# Link against the project libraries
# If your project has multiple libraries, you should list them here
#target_link_libraries(test_project PRIVATE your_library_name)
