# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

#project name
PROJECT(test_list_reverse)
#head file path
#INCLUDE_DIRECTORIES(
#include
#)
#source directory
#AUX_SOURCE_DIRECTORY(src DIR_SRCS)
#set environment variable
#SET(TEST_MATH
#${DIR_SRCS}
#)
#set extern libraries
#SET(LIBRARIES
#libm.so
#)

#设置可执行文件生成路径
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin) 
#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) 
message(status "PROJECT_SOURCE_DIR:" ${PROJECT_SOURCE_DIR})
message(status "PROJECT_BINARY_DIR:" ${PROJECT_BINARY_DIR})
#add executable file
ADD_EXECUTABLE(list_reverse reverse_nodelist.cpp)
#ADD_EXECUTABLE(../bin/bin ${TEST_MATH})
#add link library
#TARGET_LINK_LIBRARIES(../bin/bin ${LIBRARIES})
