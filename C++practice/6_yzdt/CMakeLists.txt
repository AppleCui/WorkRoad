project (yzdt)

CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g")

INCLUDE_DIRECTORIES(
    include)

message(STATUS "PROJECT_NAME: ${PROJECT_NAME}")

ADD_EXECUTABLE(virtualfun src/01-virtualfun.cpp)
ADD_EXECUTABLE(virdes src/02-virdestructor.cpp)
ADD_EXECUTABLE(virfunlistpointer src/03-virfunlistpointer.cpp)
ADD_EXECUTABLE(purevirabs src/04-purevirabstract.cpp)
ADD_EXECUTABLE(interfacetype src/05-interfaceType.cpp)






