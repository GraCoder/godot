cmake_minimum_required(VERSION 3.24)

set(target_name gd_scene)

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})
set(target_gen_dir ${gen_dir}/scene)

file(GLOB_RECURSE target_source ${target_dir}/*.cpp ${target_dir}/*.cc)
file(GLOB_RECURSE target_gen_source ${target_gen_dir}/*.cpp)

source_group(TREE ${target_dir} FILES ${target_source})
source_group(TREE ${target_gen_dir} FILES ${target_gen_source})

add_library(${target_name} ${target_source} ${target_gen_source})

target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR}/gen/scene/theme)

target_link_libraries(${target_name} PRIVATE zlib)
