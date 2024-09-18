cmake_minimum_required(VERSION 3.24)

set(target_name gd_drivers)

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

set(target_source
	register_driver_types.h
	register_driver_types.cpp
)

foreach(subsrc ${src_dirs})
	add_source_file(${subsrc} *.cpp *.h *.cc)
	list(APPEND target_source ${ret_${subsrc}})
endforeach()

add_library(${target_name} ${target_source} )

if(with_gles3)
	target_compile_definitions(${target_name} PRIVATE GLES_OVER_GL)
endif()

if(with_volk)
	target_compile_definitions(${target_name} PUBLIC USE_VOLK)
endif()

target_include_directories(${target_name} PRIVATE ${third_dir}/glad)
target_include_directories(${target_name} PRIVATE ${third_dir}/vulkan)
target_include_directories(${target_name} PUBLIC ${third_dir}/volk)
target_include_directories(${target_name} PUBLIC ${third_dir}/vulkan/include)
target_include_directories(${target_name} PRIVATE ${third_dir}/libpng)

target_include_directories(${target_name} PRIVATE ${third_inc})

target_link_libraries(${target_name} PRIVATE gd_core)

target_link_libraries(${target_name} PRIVATE freetype vulkan libpng zlib)

target_link_libraries(${target_name} PRIVATE Shlwapi.lib Ws2_32.lib Iphlpapi.lib opengl32.lib ntdll.lib)
