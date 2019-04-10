CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

PROJECT(cpp03)

INCLUDE_DIRECTORIES(
../include
)

FILE (GLOB cpp03_sources
	*.cpp
)

FILE (GLOB cpp03_headers
	../include/include.h
	*.h
)

ADD_DEFINITIONS(
-DZMQ_STATIC
)

ADD_EXECUTABLE (cpp03 ${cpp03_sources} ${cpp03_headers})
