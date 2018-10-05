cmake_minimum_required(VERSION 3.1)

list(APPEND GTEST_SRCS TestGreeting.cpp)
list(APPEND GTEST_SRCS main.cpp)

set(GREETING_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../src)

set(GREETING_LIB ${CMAKE_CURRENT_SOURCE_DIR}/../lib/libgreeting.a)

include_directories(${GREETING_INCLUDE_DIR})

add_executable(test ${GTEST_SRCS})

target_link_libraries(test ${GREETING_LIB} stdc++ gtest gtest_main)

set_target_properties(test PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin)

