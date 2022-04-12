cmake_minimum_required(VERSION 3.14)

SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

project(sds-playground C)

file(GLOB SDS_HEADERS ${SDS_LIBRARY_PATH}/*.h)
file(GLOB SDS_SOURCES ${SDS_LIBRARY_PATH}/*.c)

message(STATUS ${SDS_LIBRARY_PATH})
message(STATUS ${SDS_HEADERS})
message(STATUS ${SDS_SOURCES})

add_library(sds STATIC ${SDS_HEADERS} ${SDS_SOURCES})
target_include_directories(sds PUBLIC "${SDS_LIBRARY_PATH}")

add_executable(${PROJECT_NAME}
    "src/main.c")

target_link_libraries(${PROJECT_NAME} 
    sds)
