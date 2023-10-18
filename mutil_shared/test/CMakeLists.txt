cmake_minimum_required(VERSION 3.15)
project(test2)

#搜索源文件
aux_source_directory(./ SRC)

#指定头文件路径
include_directories(${HEADPATH})

#链接静态库
#link_libraries(${SORTLIB})


#库所在的位置
link_directories(${LIBPATH})

#生成可执行文件
set(EXECUTABLE_OUTPUT_PATH ${EXECPATH})
add_executable(${APPNAME2} ${SRC})

#链接到动态库
target_link_libraries(${APPNAME2} ${SORTLIB})


