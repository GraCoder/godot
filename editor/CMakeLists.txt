cmake_minimum_required(VERSION 3.24)

set(target_name gd_editor)

project(${target_name})


set(src_dir ${CMAKE_CURRENT_SOURCE_DIR})
set(src_dirs
	${src_dir}
	${src_dir}/debugger
	${src_dir}/debugger/debug_adapter
	${src_dir}/export
	${src_dir}/gui
	${src_dir}/fileserver
	${src_dir}/import
	${src_dir}/plugins
	${src_dir}/plugins/gizmos
	${src_dir}/plugins/tiles
)

set(target_src)
foreach(dir ${src_dirs})
	add_source_file(${dir} *.cpp *.h)
	list(APPEND target_src ${ret_${dir}})
endforeach()

set(gen_dir ${CMAKE_SOURCE_DIR}/gen/editor)
add_source_dir(${gen_dir} *.cpp *.h *.cc)

add_library(${target_name} ${target_src} ${ret_${gen_dir}})

target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(${target_name} PRIVATE ${src_dir})

target_include_directories(${target_name} PRIVATE ${third_inc})
