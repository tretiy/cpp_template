cmake_minimum_required(VERSION 3.11 FATAL_ERROR)
project(Tests VERSION 0.0.1 LANGUAGES CXX)
find_package(doctest CONFIG REQUIRED)
include(doctest)

add_executable(my_doc_tests test.cpp)
add_library(Alib A.cpp)
target_link_libraries(my_doc_tests PRIVATE Alib)
add_executable(main main.cpp)

doctest_discover_tests(my_doc_tests)
enable_testing()