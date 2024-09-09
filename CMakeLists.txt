cmake_minimum_required(VERSION 3.30)

#Name project
SET(ProjectName ex4)

#Define executable file
SET(ExcFile random_nr)

#Project name and version
project(${ProjectName}
	VERSION 1.0
	DESCRIPTION "Learning to create CMakeLists.txt"
	LANGUAGES C)

#Source files
SET(SOURCES 
	src/random.c
	src/main.c
)

add_executable(${ExcFile}
			${SOURCES}
)
#Include directories
target_include_directories(${ExcFile} PRIVATE inc)

#set language to C 17 
target_compile_features(${ExcFile} PRIVATE c_std_17)

#Set compiler flags
target_compile_options(${ExcFile} PRIVATE
	-Wall
	-Wextra
	-Wfatal-errors
	-Wpedantic
)
