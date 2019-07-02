cmake_minimum_required(VERSION 3.12)
project(PolishNonation)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(libs/googletest)

include_directories(libs/googletest/googletest/include)

add_executable(PolishNonation main.cpp Stack.cpp Stack.h Operations.cpp Operations.h PolishNotation.cpp PolishNotation.h Resulter.cpp Resulter.h)

add_executable(Tests tests.cpp
        Stack.cpp Stack.h Operations.cpp Operations.h PolishNotation.cpp PolishNotation.h Resulter .cpp Resulter .h)

target_link_libraries(Test gtest gtest_main)