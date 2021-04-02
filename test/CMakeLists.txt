cmake_minimum_required(VERSION 3.15)
project(proj)
set(BINARY test)
set(SCR_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../app)
message("current directory:${CMAKE_CURRENT_SOURCE_DIR}")
message("main directory:${SCR_BASE_DIR}")
set(HEADERS 
	${SCR_BASE_DIR}/inc/database/write_to_db.h
	)
set(SOURCES 
	main.cpp 
	test.cpp
	${SCR_BASE_DIR}/src/database/write_to_db.c
	)
include_directories(../app/inc)
add_executable(${BINARY} ${SOURCES} ${HEADERS})
add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} PUBLIC gtest)
add_subdirectory(lib/googletest-master)


