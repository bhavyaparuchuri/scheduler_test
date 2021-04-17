cmake_minimum_required(VERSION 3.6.0)
project(test)
#find_package(GTest REQUIRED)
include_directories(
        ${CMAKE_SOURCE_DIR}/app/inc/database
        ${CMAKE_SOURCE_DIR}/app/inc/actuator
        ${CMAKE_SOURCE_DIR}/app/inc/ventilation
        ${GTEST_INCLUDE_DIRS}
        )
set(SOURCES_MAIN main.cpp
	database/control_db_test.cpp
	database/config_db_test.cpp
	database/compute_db_test.cpp
	database/powersupply_db_test.cpp
	database/rtc_db_test.cpp
	database/usb_db_test.cpp
	database/version_db_test.cpp
	database/trend_db_test.cpp
        ${CMAKE_SOURCE_DIR}/app/src/database/write_to_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/config_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/control_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/rtc_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/usb_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/trend_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/version_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/powersupply_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/measurement_db.c
        ${CMAKE_SOURCE_DIR}/app/src/database/compute_db.c
	${CMAKE_SOURCE_DIR}/app/src/database/db_utils.c
        ${CMAKE_SOURCE_DIR}/app/src/database/read_from_db.c
        ${CMAKE_SOURCE_DIR}/app/src/actuator/ACT_BlowerCmd.c
        ${CMAKE_SOURCE_DIR}/app/src/actuator/ACT_BrakePower.c
	${CMAKE_SOURCE_DIR}/app/src/actuator/ACT_O2ValveCmd.c
        ${CMAKE_SOURCE_DIR}/app/src/actuator/ACT_ValveCmd.c
        ${CMAKE_SOURCE_DIR}/app/src/actuator/ACT_ValveDetected.c
	${CMAKE_SOURCE_DIR}/app/src/general/Saturation.c
        )
add_executable(${PROJECT_NAME} ${SOURCES_MAIN})
target_link_libraries(${PROJECT_NAME} pthread gtest)
add_subdirectory(lib/googletest-master)
