cmake_minimum_required(VERSION 3.10)

project(snob)

add_executable(snob common_main.cpp
	src/builtin/init.cpp	
	src/builtin/add.cpp
)
target_include_directories(snob PRIVATE src/utils)
