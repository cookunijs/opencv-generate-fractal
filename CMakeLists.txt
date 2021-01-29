cmake_minimum_required(VERSION 2.8.12)

set (CMAKE_CXX_STANDARD 11)
project(opencv-dev)
add_executable(${PROJECT_NAME} src/main.cpp src/func.cpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})