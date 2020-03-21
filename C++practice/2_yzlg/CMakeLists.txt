project (yzlg)

CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g")

ADD_EXECUTABLE(yinyong src/01-yinyong.cpp)
ADD_EXECUTABLE(texing src/02-texing.cpp)
ADD_EXECUTABLE(newdelete src/03-newdelete.cpp)
# target_link_libraries(testhello)
