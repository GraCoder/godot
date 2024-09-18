cmake_minimum_required(VERSION 3.24)

set(target_name pcre2)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

set(target_source
	16.c
	32.c
)

add_library(${target_name} SHARED ${target_source})

set_target_properties(${target_name} PROPERTIES FOLDER "third")

#target_compile_definitions(${target_name} PRIVATE PCRE2_STATIC)

target_include_directories(${target_name} PRIVATE ${target_dir})
target_include_directories(${target_name} PRIVATE ${target_dir}/src)

target_include_directories(${target_name} PRIVATE ${third_dir}/zlib)

target_link_libraries(${target_name} PRIVATE zlib)
