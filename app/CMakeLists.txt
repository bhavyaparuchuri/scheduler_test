project(ventilator_app C)
file(GLOB sources
		"${CMAKE_SOURCE_DIR}/app/src/main.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/read_from_db.c"
       		"${CMAKE_SOURCE_DIR}/app/src/database/write_to_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/db_utils.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/config_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/rtc_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/usb_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/version_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/trend_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/control_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/compute_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/powersupply_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/measurement_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/actuator/ACT_BlowerCmd.c"
		"${CMAKE_SOURCE_DIR}/app/src/actuator/ACT_BrakePower.c"
		"${CMAKE_SOURCE_DIR}/app/src/actuator/ACT_O2ValveCmd.c"
		"${CMAKE_SOURCE_DIR}/app/src/actuator/ACT_ValveCmd.c"
		"${CMAKE_SOURCE_DIR}/app/src/actuator/ACT_ValveDetected.c"
		"${CMAKE_SOURCE_DIR}/app/src/general/Saturation.c"
	)

include_directories("${CMAKE_SOURCE_DIR}/app/inc"
	"${CMAKE_SOURCE_DIR}/app/inc/database"
	"${CMAKE_SOURCE_DIR}/app/inc/actuator"
	"${CMAKE_SOURCE_DIR}/app/inc/ventilation"
	)
add_executable(${PROJECT_NAME} ${sources})
