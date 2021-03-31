set(BINARY test)
set(HEADERS )
set(SOURCES main.cpp test.cpp)
add_executable(${BINARY} ${SOURCES} ${HEADERS})
add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} PUBLIC computelib gtest)

