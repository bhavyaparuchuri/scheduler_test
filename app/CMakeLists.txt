project(ventilator_app)
set(SOURCE 
	${CMAKE_SOURCE_DIR}/app/src/main.c 
	${CMAKE_SOURCE_DIR}/app/src/scheduling/sched_ventilation_main.c 
	${CMAKE_SOURCE_DIR}/app/src/scheduling/sched_setup_main.c
	${CMAKE_SOURCE_DIR}/app/src/database/read_from_db.c
	${CMAKE_SOURCE_DIR}/app/src/database/write_to_db.c
	)

include_directories(${CMAKE_SOURCE_DIR}/app/inc
	${CMAKE_SOURCE_DIR}/app/inc/database
	${CMAKE_SOURCE_DIR}/app/inc/scheduling
	)
add_executable(CMAKE_PROJECT_NAME ${SOURCE})

