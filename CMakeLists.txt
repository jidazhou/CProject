cmake_minimum_required(VERSION 3.22)
project(CProject C)

set(CMAKE_C_STANDARD 99)

add_executable(CProject main.c chapter1/test1.c chapter1/test2.c chapter1/int_arr_max.c)

add_executable(test1 chapter1/test1.c)
add_executable(main main.c)
add_executable(test2 chapter1/test2.c)
add_executable(int_arr_max chapter1/int_arr_max.c)