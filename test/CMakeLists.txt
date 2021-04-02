cmake_minimum_required(VERSION 3.6.0)
project(test)
#find_package(GTest REQUIRED)
include_directories(
        ${CMAKE_SOURCE_DIR}/app/inc/database
        ${GTEST_INCLUDE_DIRS}
        )
set(SOURCES_MAIN main.cpp
        test.cpp
        ${CMAKE_SOURCE_DIR}/app/src/database/write_to_db.c
        )
add_executable(${PROJECT_NAME} ${SOURCES_MAIN})
target_link_libraries(${PROJECT_NAME} pthread gtest)
add_subdirectory(lib/googletest-master)
