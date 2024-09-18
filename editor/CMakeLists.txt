cmake_minimum_required(VERSION 3.24)

set(target_name gd_editor)

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})
set(target_gen_dir ${gen_dir}/editor)

file(GLOB_RECURSE target_source ${target_dir}/*.cpp)
file(GLOB_RECURSE target_gen_source ${target_gen_dir}/*.cpp)

list(FILTER target_source EXCLUDE REGEX ".*d3d12.*")
list(FILTER target_source EXCLUDE REGEX ".*metal.*")

source_group(TREE ${target_dir} FILES ${target_source})
source_group(TREE ${target_gen_dir} FILES ${target_gen_source})

add_library(${target_name} ${target_source} ${target_gen_source})

target_include_directories(${target_name} PRIVATE ${target_dir})

target_include_directories(${target_name} PRIVATE ${third_dir}/)
target_include_directories(${target_name} PRIVATE ${third_dir}/clipper2/include)

target_link_libraries(${target_name} PRIVATE zlib)
