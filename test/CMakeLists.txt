cmake_minimum_required(VERSION 3.6.0)
project(test)
#find_package(GTest REQUIRED)
include_directories(
        ${CMAKE_SOURCE_DIR}/app/inc/database
        ${GTEST_INCLUDE_DIRS}
        )
set(SOURCES_MAIN main.cpp
        database/control_db_test.cpp
        ${CMAKE_SOURCE_DIR}/app/src/database/write_to_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/config_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/control_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/rtc_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/usb_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/trend_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/version_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/powersupply_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/compute_db.c
	${CMAKE_SOURCE_DIR}/app/src/database/db_utils.c
        ${CMAKE_SOURCE_DIR}/app/src/database/read_from_db.c
        )
add_executable(${PROJECT_NAME} ${SOURCES_MAIN})
target_link_libraries(${PROJECT_NAME} pthread gtest)
add_subdirectory(lib/googletest-master)
