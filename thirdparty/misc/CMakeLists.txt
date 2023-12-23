cmake_minimum_required(VERSION 3.24)

set(target_name misc)

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)


file(GLOB_RECURSE target_source ${target_dir}/*.cpp ${target_dir}/*.c)
source_group(TREE ${target_dir} FILES ${target_source})

add_library(${target_name} ${target_source})

set_target_properties(${target_name} PROPERTIES FOLDER "third")

target_include_directories(${target_name} INTERFACE ${target_dir})
