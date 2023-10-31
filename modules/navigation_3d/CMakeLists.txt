cmake_minimum_required(VERSION 3.24)

set(target_name navigation)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})


set(src_dirs
	${target_dir}
)

set(target_src)

foreach(src_dir ${src_dirs})
	add_source_dir(${src_dir} *.h *.cpp)
	list(APPEND target_src ${ret_${src_dir}})
endforeach()

add_library(${target_name} ${target_src})

set_target_properties(${target_name} PROPERTIES FOLDER "modules")


target_include_directories(${target_name} PRIVATE ${thirdin_dir}/rvo2)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/rvo2/rvo2_2d)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/rvo2/rvo2_3d)

target_include_directories(${target_name} PRIVATE ${thirdin_dir}/recastnavigation/Recast/Include)
#target_link_libraries(${target_name} PRIVATE recastnavigation)
