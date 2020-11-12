cmake_minimum_required(VERSION 2.8)

project(cmake_link_dll)

add_library(hello SHARED IMPORTED)
set_property(TARGET hello PROPERTY
	    IMPORTED_LOCATION "${PROJECT_SOURCE_DIR}/lib/hello_dll.dll")
set_property(TARGET hello PROPERTY
	    IMPORTED_IMPLIB "${PROJECT_SOURCE_DIR}/lib/hello_dll.lib")

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/main.cpp)

set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}/lib")

TARGET_LINK_LIBRARIES(${PROJECT_NAME} PRIVATE hello)
