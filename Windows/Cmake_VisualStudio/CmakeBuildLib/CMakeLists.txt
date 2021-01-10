cmake_minimum_required(VERSION 2.8)

project(hello_lib)

add_library(${PROJECT_NAME}  
	 ${PROJECT_SOURCE_DIR}/src/hello.h
	 ${PROJECT_SOURCE_DIR}/src/hello.cpp
	 ${PROJECT_SOURCE_DIR}/src/good.h
	 ${PROJECT_SOURCE_DIR}/src/good.cpp
	)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION lib)
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C)
install(FILES ${PROJECT_SOURCE_DIR}/src/hello.h DESTINATION include)
