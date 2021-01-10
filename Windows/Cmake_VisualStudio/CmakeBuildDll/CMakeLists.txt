cmake_minimum_required(VERSION 2.8)

#set(CMAKE_CONFIGURATION_TYPES "Release")

set(CMAKE_CXX_STANDARD 11)

project(hello_dll)

add_library(${PROJECT_NAME}  SHARED ${PROJECT_SOURCE_DIR}/src/hello.cpp)

#add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/hello.cpp)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION lib)
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C)
install(FILES ${PROJECT_SOURCE_DIR}/src/hello.h DESTINATION include)
