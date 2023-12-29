cmake_minimum_required(VERSION 2.6)
set(PROJECT_NAME test)

project(${PROJECT_NAME})
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB CPPS 
            "src/main.cpp" 
            "src/ReservedToken.cpp")

add_executable(${PROJECT_NAME} ${CPPS})