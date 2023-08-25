cmake_minimum_required(VERSION 3.20.0)
project(LeaverProject)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

file(GLOB proj *)
include_directories(leave_lib)
add_executable(${PROJECT_NAME} ${proj})

add_subdirectory(leave_lib)

target_link_libraries(${PROJECT_NAME} leave_lib)


