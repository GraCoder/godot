cmake_minimum_required(VERSION 3.24)

set(target_name libpng)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(src_dirs
	${target_dir}
)

file(GLOB_RECURSE target_source "*.c")

add_library(${target_name} STATIC ${target_source})

set_target_properties(${target_name} PROPERTIES FOLDER "third")

#target_compile_definitions(${target_name} PRIVATE ZLIB_DLL)

target_include_directories(${target_name} PRIVATE ${target_dir})
target_include_directories(${target_name} PRIVATE ${target_dir}/include)

target_include_directories(${target_name} PRIVATE ${third_dir}/zlib)

target_link_libraries(${target_name} PRIVATE zlib)
