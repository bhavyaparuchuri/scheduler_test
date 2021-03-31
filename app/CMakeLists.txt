project(ventilator_app)
set(SOURCE 
	src/main.c 
	src/scheduling/sched_ventilation_main.c 
	src/scheduling/sched_setup_main.c
	src/database/read_from_db.c
	src/database/write_to_db.c
	)

include_directories(inc)
add_executable(CMAKE_PROJECT_NAME ${SOURCE})

