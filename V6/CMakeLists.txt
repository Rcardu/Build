project(TEST)
cmake_minimum_required(VERSION 3.10)
aux_source_directory(${PROJECT_SOURCE_DIR} SRC)

add_definitions(-DDEBUG)

add_executable(app ${SRC})