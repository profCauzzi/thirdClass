cmake_minimum_required(VERSION 3.23)

project(main)
set(CMAKE_CXX_STANDARD 14)
add_executable(main main.cpp)

project(populating)
set(CMAKE_CXX_STANDARD 14)
add_executable(populating populating.cpp)

project(impossible)
set(CMAKE_CXX_STANDARD 14)
add_executable(impossible impossible.cpp)

project(manipulating)
set(CMAKE_CXX_STANDARD 14)
add_executable(manipulating manipulating.cpp)

project(shift)
set(CMAKE_CXX_STANDARD 14)
add_executable(shift shift.cpp)

project(repetition)
set(CMAKE_CXX_STANDARD 14)
add_executable(repetition repetitionCounter.cpp)

project(naive)
set(CMAKE_CXX_STANDARD 14)
add_executable(naive naive_sort.cpp)

project(bubble_sort)
set(CMAKE_CXX_STANDARD 14)
add_executable(bubble_sort ordering_bubble_sort.cpp)

project(vector)
set(CMAKE_CXX_STANDARD 14)
add_executable(vector vector.cpp)