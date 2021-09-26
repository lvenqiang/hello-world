# 指定cmake的最低版本
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# 项目名称
PROJECT(CMakeListsTest)

# 平台类型
IF(WIN32)
    MESSAGE(STATUS "System is windows")
ELSEIF(APPLE)
    MESSAGE(STATUS "System is apple")
ELSEIF(UNIX)
    MESSAGE(STATUS "System is UNIX")
ENDIF()

#设置c++标准
set(CMAKE_CXX_STANDARD 11)

#指定生成的版本
set(CMAKE_BUILD_TYPE DEBUG)

#设置编译flags
message("cmake env flags ${CMAKE_BUILD_TYPE}")

set(CMAKE_CXX_FLAGS "-fPIC ${CMAKE_CXX_FLAGS}")

if ("${CMAKE_BUILD_TYPE}" STREQUAL "DEBUG")
    message("build type debug")
    set(CMAKE_CXX_FLAGS "-Wall -o0 -g -ggdb ${CMAKE_CXX_FLAGS}")
ELSEIF ("${CMAKE_BUILD_TYPE}}" STREQUAL "Release")
    message("build type release!")
    set(CAKE_CXX_FLAGS "-O3 -Wall ${CMAKE_CXX_FLAGS}")
else ()
    message("unknow type:${CMAKE_BUILD_TYPE}")
endif ()

INCLUDE_DIRECTORIES(./Add ./Subtract)
ADD_SUBDIRECTORY(Add)
ADD_SUBDIRECTORY(Subtract)

#设置可执行文件生成路径
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
message("ARCHIVE_OUTPUT_DIRECTORY : ${ARCHIVE_OUTPUT_DIRECTORY}")
message("PROJECT_BINARY_DIR : ${PROJECT_BINARY_DIR}")
message("PROJECT_SOURCE_DIR : ${PROJECT_SOURCE_DIR}")
message("CMAKE_BINARY_DIR : ${CMAKE_BINARY_DIR}")
message("CMAKE_SOURCE_DIR : ${CMAKE_SOURCE_DIR}")


#添加所有源文件
AUX_SOURCE_DIRECTORY(. DIR_SRCS)
ADD_EXECUTABLE(CMakeListsTestDemo ${DIR_SRCS})
TARGET_LINK_LIBRARIES(CMakeListsTestDemo Add Subtract)
