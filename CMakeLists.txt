cmake_minimum_required(VERSION 3.17)
project(data_structures)

set(CMAKE_CXX_STANDARD 17)

add_executable(data_structures Array.h main.cpp LinkedList.h DynamicArray.h Queue1.h Stack.h MergeSort.cpp MergeSort.h list/List.h list/ArrayList.h list/LinkedList.h list/Link.h queue/Queue.h queue/LQueue.h dict/Dict.h dict/Pair.h dict/UnorderedDict.h)