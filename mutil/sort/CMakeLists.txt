cmake_minimum_required(VERSION 3.15)
project(sort)

#搜索sort目录下的所有源文件
aux_source_directory(./ SRC)

#指定要包含的头文件的路径
include_directories(${HEADPATH})

#指定静态库生成目录
set(LIBRARY_OUTPUT_PATH ${LIBPATH})

#将源文件变成静态库
add_library(${SORTLIB} STATIC ${SRC})
