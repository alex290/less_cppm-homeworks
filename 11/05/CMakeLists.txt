cmake_minimum_required(VERSION 3.20.0)
project(FigureProject)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

file(GLOB proj *)
include_directories(lib)
add_executable(${PROJECT_NAME} ${proj})

add_subdirectory(lib)

target_link_libraries(${PROJECT_NAME} figure_lib)


