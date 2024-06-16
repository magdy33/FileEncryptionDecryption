cmake_minimum_required(VERSION 3.30)
project(ENCRYPTILES)

set(src_files main.cpp src/encrypt.cpp)



add_executable(run ${src_files})

target_include_directories(run PUBLIC inc/)