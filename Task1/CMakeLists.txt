cmake_minimum_required(VERSION 3.12) 
									
									
project(Task1)
add_executable(main main.cpp src/checker.cpp)		
target_include_directories(main PUBLIC include)
									
enable_testing()

find_package(GTest REQUIRED)

add_executable(run_tests test/test01.cpp src/checker.cpp)
target_include_directories(run_tests PUBLIC include)
target_link_libraries(run_tests GTest::gtest GTest::gtest_main)

add_test(NAME tests COMMAND run_tests)
