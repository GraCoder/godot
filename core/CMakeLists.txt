cmake_minimum_required(VERSION 3.24)

set(target_name gd_core)

project(${target_name})

#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(src_dir ${CMAKE_CURRENT_SOURCE_DIR})
add_source_dir(${src_dir} *.cpp *.h *.cc)

set(gen_dir ${CMAKE_SOURCE_DIR}/gen/core)
add_source_dir(${gen_dir} *.cpp *.h *.cc)

add_library(${target_name} ${target_src} ${ret_${src_dir}} ${ret_${gen_dir}})

target_include_directories(${target_name} PUBLIC ${third_inc})
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/mbedtls/include)

target_link_directories(${target_name} PRIVATE ${third_lib})
