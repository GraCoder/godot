cmake_minimum_required(VERSION 3.24)

set(target_name gd_servers)

project(${target_name})

set(src_dir ${CMAKE_CURRENT_SOURCE_DIR})
set(src_dirs
	${src_dir}
	${src_dir}/audio
	${src_dir}/audio/effects
	${src_dir}/camera
	${src_dir}/debugger
	${src_dir}/extensions
	${src_dir}/movie_writer
	${src_dir}/navigation
	${src_dir}/physics_2d
	${src_dir}/physics_3d
	${src_dir}/physics_3d/joints
	${src_dir}/text
	${src_dir}/xr
	${src_dir}/rendering
	${src_dir}/rendering/dummy
	${src_dir}/rendering/dummy/environment
	${src_dir}/rendering/dummy/storage
	${src_dir}/rendering/environment
	${src_dir}/rendering/renderer_rd
	${src_dir}/rendering/renderer_rd/effects
	${src_dir}/rendering/renderer_rd/environment
	${src_dir}/rendering/renderer_rd/forward_clustered
	${src_dir}/rendering/renderer_rd/storage_rd
	${src_dir}/rendering/storage
)

option(WITH_MOBILE_RENDER "" true)

if(WITH_MOBILE_RENDER)
	list(APPEND src_dirs
		${src_dir}/rendering/renderer_rd/forward_mobile
		)
endif()

set(target_src)
foreach(dir ${src_dirs})
	add_source_file(${dir} *.cpp *.h)
	list(APPEND target_src ${ret_${dir}})
endforeach()

add_library(${target_name} ${target_src})

#option(ENABLE_DEBUG_CULL_TIME "" false)
#if(ENABLE_DEBUG_CULL_TIME)
#	target_compile_definitions(${target_name} PRIVATE DEBUG_CULL_TIME)
#endif()


target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(${target_name} PUBLIC ${ZLIB_INCLUDE_DIR})
