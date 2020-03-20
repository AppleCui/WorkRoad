project (yzqh)

CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g")

ADD_EXECUTABLE(testhello src/01-testhello.cpp)
ADD_EXECUTABLE(namespace src/02-namespace.cpp)
ADD_EXECUTABLE(zonghe src/03-zonghe.cpp)
# target_link_libraries(testhello)
