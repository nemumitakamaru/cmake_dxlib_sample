cmake_minimum_required(VERSION 3.6)

file(GLOB SOURCE_FILES *.cpp)

add_library(Utility STATIC ${SOURCE_FILES})
