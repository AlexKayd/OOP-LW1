cmake_minimum_required(VERSION 3.10)
project(OOP-LW1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(googletest)

add_executable(main main.cpp bit.cpp)

add_executable(tests tests.cpp bit.cpp)
target_link_libraries(tests PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)