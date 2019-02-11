cmake_minimum_required(VERSION 3.6)

file(GLOB SOURCE_FILES *.cpp *.h)

# exeのプロジェクトの指定
add_executable(Main ${SOURCE_FILES})

link_directories(Utility)
target_link_libraries(Main Utility)
