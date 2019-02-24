cmake_minimum_required(VERSION 3.6)

file(GLOB SOURCE_FILES *.cpp *.h)

# exeのプロジェクトの指定
add_executable(Main ${SOURCE_FILES})

link_directories(Utility)
target_link_libraries(Main Utility)

# MD/MDdをMT/MTdにする。この指定だけで大丈夫かは不明
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
