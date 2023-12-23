cmake_minimum_required(VERSION 3.24)

set(target_name gd_core)

#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})
set(target_gen_dir ${gen_dir}/core)

file(GLOB_RECURSE target_source ${target_dir}/*.cpp)
file(GLOB_RECURSE target_gen_source ${target_gen_dir}/*.cpp)

source_group(TREE ${target_dir} FILES ${target_source})
source_group(TREE ${target_gen_dir} FILES ${target_gen_source})

add_library(${target_name} ${target_source} ${target_gen_source})

target_compile_definitions(${target_name} PUBLIC NOMINMAX)

target_include_directories(${target_name} PUBLIC ${thirdin_dir})
target_include_directories(${target_name} PUBLIC ${thirdin_dir}/zlib)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/mbedtls/include)

target_link_directories(${target_name} PRIVATE ${third_lib})
