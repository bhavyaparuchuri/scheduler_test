project(test_scheduler)
cmake_minimum_required(VERSION 3.15.4)
set(SOURCE 
	src/main.c 
	src/dum_headers.c 
	src/SCHED_Ventilation_Main.c 
	src/SCHED_Setup_Main.c)

include_directories(inc)
add_executable(output ${SOURCE})
add_subdirectory(test)
add_subdirectory(lib/googletest-master)


