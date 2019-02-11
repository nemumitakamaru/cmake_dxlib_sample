cmake_minimum_required(VERSION 3.6)

# slnの名前
set(PROJECT_NAME "CMakeDxLibSample")

# slnを設定する
project(${PROJECT_NAME} CXX)

# WinMainはSubSystemがWindowsである必要がある
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS")

# DxLibが置いてあるパス。適宜変更する必要あり
SET(DxLib_DIR "C:/DxLib")

# インクルードパスの設定
include_directories(${DxLib_DIR})
include_directories(Source)

# ライブラリパスの設定
link_directories(${DxLib_DIR})

add_subdirectory(source/Utility)
add_subdirectory(source)
