cmake_minimum_required(VERSION 3.24)

set(target_name gltf)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})


set(src_dirs
	${target_dir}
	${target_dir}/extensions/physics
)

set(target_source)

foreach(src_dir ${src_dirs})
	add_source_dir(${src_dir} *.h *.cpp)
	list(APPEND target_source ${ret_${src_dir}})
endforeach()

add_library(${target_name} ${target_source})

set_target_properties(${target_name} PROPERTIES FOLDER "modules")

target_include_directories(${target_name} PRIVATE ${third_dir}/zlib)

target_link_libraries(${target_name} PRIVATE zlib)
