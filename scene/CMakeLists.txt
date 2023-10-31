cmake_minimum_required(VERSION 3.24)

set(target_name gd_scene)

project(${target_name})

set(src_dir
	${CMAKE_CURRENT_SOURCE_DIR}
)

add_source_dir(${src_dir} *.cpp *.h *.cc)

set(target_src
	#${src_dir}/resources/default_theme/default_theme.cpp
)

add_library(${target_name} ${ret_${CMAKE_CURRENT_SOURCE_DIR}} ${target_src})

target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR}/gen/scene/theme)

target_link_libraries(${target_name} PRIVATE zlib)
