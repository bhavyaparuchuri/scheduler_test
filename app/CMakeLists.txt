project(ventilator_app)
set(SOURCE
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.c
	${CMAKE_CURRENT_SOURCE_DIR}/src/scheduling/sched_ventilation_main.c
       	${CMAKE_CURRENT_SOURCE_DIR}/src/scheduling/sched_setup_main.c
       	${CMAKE_CURRENT_SOURCE_DIR}/src/database/read_from_db.c
       	${CMAKE_CURRENT_SOURCE_DIR}/src/database/write_to_db.c	
	)

include_directories(${CMAKE_SOURCE_DIR}/schedular_test/app/inc
	${CMAKE_SOURCE_DIR}/schedular_test/app/inc/database
	${CMAKE_SOURCE_DIR}/schedular_test/app/inc/scheduling
	)
add_executable(CMAKE_PROJECT_NAME ${SOURCE})
message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CMAKE_SOURCE_DIR:${CMAKE_SOURCE_DIR}")

