cmake_minimum_required(VERSION 2.8)

project(cmake_link_lib)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)

LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/main.cpp)

TARGET_LINK_LIBRARIES(${PROJECT_NAME} hello_lib.lib)
