cmake_minimum_required(VERSION 3.17)
project(ssu_ds_10)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

add_executable(ssu_ds_10 main.cpp HeapNode.h MaxHeap.h HeapSort.h)