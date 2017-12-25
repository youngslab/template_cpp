CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

PROJECT (app)

add_executable(${PROJECT_NAME} main.cpp)

set_target_properties (${PROJECT_NAME}
	PROPERTIES CXX_STANDARD 14)

add_subdirectory(test)

# target_include_directories(${PROJECT_NAME})

# target_link_libraries(${PROJECT_NAME}
#	    ${GIO_LDFLAGS}
#		    ${GLIB_LDFLAGS}
#			    ${SQLITE3_LDFLAGS})



