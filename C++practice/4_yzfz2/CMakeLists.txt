project (yzfz2)

CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g")

INCLUDE_DIRECTORIES(
    include)

LIST(APPEND SOURCEFILES
    src/01-duixiangsz.cpp
    src/02-duixiangcy.cpp
)

message(STATUS "PROJECT_NAME: ${PROJECT_NAME}")

add_library(${PROJECT_NAME} SHARED ${SOURCEFILES})
target_link_libraries(${PROJECT_NAME})

ADD_EXECUTABLE(duixiangsz src/01-dxszmain.cpp)
target_link_libraries(duixiangsz ${PROJECT_NAME})
ADD_EXECUTABLE(duixiangcy src/02-dxcymain.cpp)
target_link_libraries(duixiangcy ${PROJECT_NAME})
ADD_EXECUTABLE(simplecopy src/03-simplecopy.cpp)
ADD_EXECUTABLE(deepcopy src/04-deepcopy.cpp)
#ADD_EXECUTABLE(gouzaofun src/05-gouzaofun.cpp)


#ADD_EXECUTABLE(gouzaoinit src/06-gouzaoinit.cpp)


