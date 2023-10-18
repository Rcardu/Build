#注释
#[[跨行注释
cmake_minimua_required:指定使用CMake的最低版本
project:定义工程名称，并可指定工程版本，工程描述、web主页地址、支持的语言(默认支持所有语言)，如过不需要都可以忽略
add_executable:定义工程会生成一个可执行程序(可执行程序名 源文件名)
set:定义变量(变量名 变量值)
    CMAKE_CXX_STANDARD 11:指定C++语言标准为C++11
    EXECUTABLE_OUTPUT_PATH ${HOME}/bin  可执行文件输出路径
aux_source_directory:查找某个路径下的所有源文件
file:指定要搜索的文件的路径以及文件类型
]]
cmake_minimum_required(VERSION 3.15)
project(test)
#set(SRC add.cpp div.cpp main.cpp mult.cpp sub.cpp)
    #PROJECT_SOURCE_DIR宏的搜索路径就是执行cmake命令时后面跟随的路径,即当前CMakeLists.txt所在的路径
#aux_source_directory(${PROJECT_SOURCE_DIR} SRC)
    #CMAKE_CURRENT_SOURCE_DIR 当前CMakeLists.txt所在的路径
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
#include_directories:指定头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/include)

#set(EXECUTABLE_OUTPUT_PAHT /Build/Code/outp/cc)
set(CMAKE_CXX_STANDARD 11)
#add_executable(app add.cpp div.cpp main.cpp mult.cpp sub.cpp)
#add_executable(app ${SRC})


#宏LIBRARY_OUTPUT_PATH指定库文件生成路径
set(LIBRARY_OUTPUT_PATH /Build/dabing/asc)
#制作静态库
#add_library(库名称 STATIC 源文件1 [源文件2] ....)
#库名称分为 lib+库名字+.后缀(在Linux中动态库为.so   静态库为.a  在win中动态库为.dll 静态库为.lib)
#这里指定的库名称为中间的那部分，即库名字
add_library(calc SHARED ${SRC})
#动态库
#add_library(calc SHARED ${SRC})


