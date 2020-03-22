project (yzfz1)

CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g")

INCLUDE_DIRECTORIES(
    include)

LIST(APPEND SOURCEFILES
    src/05-gouzaoTeacher.cpp
)

message(STATUS "PROJECT_NAME: ${PROJECT_NAME}")

add_library(${PROJECT_NAME} SHARED ${SOURCEFILES})
target_link_libraries(${PROJECT_NAME})

ADD_EXECUTABLE(leiduixiang src/01-leiduixiang.cpp)
ADD_EXECUTABLE(string src/02-string.cpp)
ADD_EXECUTABLE(fengzhuang src/03-fengzhuang.cpp)
ADD_EXECUTABLE(leiwaidingyi src/04-leiwaidingyi.cpp)
ADD_EXECUTABLE(gouzaofun src/05-gouzaofun.cpp)
target_link_libraries(gouzaofun ${PROJECT_NAME})

ADD_EXECUTABLE(gouzaoinit src/06-gouzaoinit.cpp)

