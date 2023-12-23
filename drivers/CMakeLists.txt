cmake_minimum_required(VERSION 3.24)

set(target_name gd_drivers)

project(${target_name})

option(with_xaudio2 "" OFF)

set(src_dir ${CMAKE_CURRENT_SOURCE_DIR})

set(src_dirs 
	${src_dir}/png
	${src_dir}/unix
	${src_dir}/vulkan
	${src_dir}/wasapi
	${src_dir}/windows
	${src_dir}/winmidi
)

if(with_gles3)
	list(APPEND src_dir
		${src_dir}/gles3
		${src_dir}/gles3/effects
		${src_dir}/gles3/environment
		${src_dir}/gles3/storage
		)
endif()

set(target_src
	register_driver_types.h
	register_driver_types.cpp
)

foreach(subsrc ${src_dirs})
	add_source_file(${subsrc} *.cpp *.h *.cc)
	list(APPEND target_src ${ret_${subsrc}})
endforeach()

add_library(${target_name} ${target_src} )

if(with_gles3)
	target_compile_definitions(${target_name} PRIVATE GLES_OVER_GL)
endif()

if(with_volk)
	target_compile_definitions(${target_name} PRIVATE USE_VOLK)
endif()

target_include_directories(${target_name} PRIVATE ${thirdin_dir}/glad)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/libpng)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/vulkan)

target_link_libraries(${target_name} PRIVATE freetype vulkan)

target_link_libraries(${target_name} PRIVATE Shlwapi.lib Ws2_32.lib Iphlpapi.lib opengl32.lib ntdll.lib)
