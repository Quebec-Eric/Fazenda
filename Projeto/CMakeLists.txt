cmake_minimum_required(VERSION 3.19)
project(MeuProjeto)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(MeuProjeto ${SOURCES})

target_link_libraries(MeuProjeto Qt6::Widgets)
