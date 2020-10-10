cmake_minimum_required(VERSION 3.18)
project(opencv_cpp_tests)

add_subdirectory(lib/googletest)

include_directories(${DIVISION_HEADERS_DIR})
include_directories(lib/googletest/googletest/include)

set(SOURCE_FILES main.cpp src/opencv_cpp.cpp)

add_executable(opencv_cpp ${SOURCE_FILES})
target_link_libraries(opencv_cpp division gtest)
install(TARGETS opencv_cpp DESTINATION bin)
