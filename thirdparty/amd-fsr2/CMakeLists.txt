cmake_minimum_required(VERSION 3.24)

set(target_name amd-fsr2)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(src_dirs
	${target_dir}
)

set(target_src)

foreach(src_dir ${src_dirs})
	add_source_dir(${src_dir} *.cpp *.h *.c)
	list(APPEND target_src ${ret_${src_dir}})
endforeach()

add_library(${target_name} SHARED ${target_src})

set_target_properties(${target_name} PROPERTIES FOLDER "third")

target_include_directories(${target_name} PRIVATE ${target_dir})
target_include_directories(${target_name} PRIVATE ${target_dir}/include)

#target_include_directories(${target_name} PRIVATE ${third_inc})
