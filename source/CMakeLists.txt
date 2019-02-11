cmake_minimum_required(VERSION 3.6)

set(SOURCE_FILES main.cpp)

# exeのプロジェクトの指定
add_executable(Main ${SOURCE_FILES})

link_directories(Utility)
target_link_libraries(Main Utility)
