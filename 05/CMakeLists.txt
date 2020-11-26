cmake_minimum_required(VERSION 3.17)
project(ssu_ds_05)

set(CMAKE_CXX_STANDARD 20)

add_executable(ssu_ds_05 _main.cpp LinkedQueue.cpp Header/LinkedQueue.h LinkedStack.cpp Header/LinkedStack.h Swap.cpp Header/Node.h Header/Student.h Header/StudentNode.h Header/IntNode.h Header/2DInt.h 2DInt.cpp Header/Swap.h Header/Alloc.h Alloc.cpp)
