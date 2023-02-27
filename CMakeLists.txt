cmake_minimum_required(VERSION 3.24)
project(boost_examples)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED)
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

add_executable(boost_examples main.cpp)
target_link_libraries(boost_examples PUBLIC Boost::boost)
