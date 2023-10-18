cmake_minimum_required(VERSION 3.15)
project(test1)

#搜索源文件
aux_source_directory(./ SRC)

#指定头文件路径
include_directories(${HEADPATH})

#链接静态库
link_directories(${LIBPATH})
link_libraries(${CALCLIB})

#生成可执行文件
set(EXECUTABLE_OUTPUT_PATH ${EXECPATH})

add_executable(${APPNAME1} ${SRC})


