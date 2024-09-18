cmake_minimum_required(VERSION 3.24)

set(target_name gd_servers)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

option(build_mobile_render "" true)

if(build_mobile_render)
	list(APPEND src_dirs
		${target_dir}/rendering/renderer_rd/forward_mobile
		)
endif()

set(src_dirs
	${target_dir}/audio
	${target_dir}/camera
	${target_dir}/debugger
	${target_dir}/extensions
	${target_dir}/movie_writer
	${target_dir}/navigation
	${target_dir}/physics_2d
	${target_dir}/physics_3d
	${target_dir}/text
	${target_dir}/xr
	${target_dir}/rendering
	${target_dir}/display
	${target_dir}/navigation_2d
	${target_dir}/navigation_3d
)
foreach(dir ${src_dirs})
	file(GLOB_RECURSE src_tmp ${dir}/*.cpp ${dir}/*.h)
	list(APPEND target_source ${src_tmp})
endforeach()

list(APPEND target_source register_server_types.cpp)

source_group(TREE ${target_dir} FILES ${target_source})
add_library(${target_name} ${target_source})

#option(ENABLE_DEBUG_CULL_TIME "" false)
#if(ENABLE_DEBUG_CULL_TIME)
#	target_compile_definitions(${target_name} PRIVATE DEBUG_CULL_TIME)
#endif()

target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(${target_name} PRIVATE gd_drivers)

target_link_libraries(${target_name} PRIVATE zlib)
