project(ventilator_app C)
file(GLOB sources
		"${CMAKE_SOURCE_DIR}/app/src/main.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/read_from_db.c"
       		"${CMAKE_SOURCE_DIR}/app/src/database/write_to_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/db_utils.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/config_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/control_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/compute_db.c"
		"${CMAKE_SOURCE_DIR}/app/src/database/powersupply_db.c"
	)

include_directories("${CMAKE_SOURCE_DIR}/app/inc"
	"${CMAKE_SOURCE_DIR}/app/inc/database"
	)
add_executable(${PROJECT_NAME} ${sources})
