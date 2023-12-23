cmake_minimum_required(VERSION 3.24)

set(prj_name godot)

project(${prj_name})

function(add_source_file dirname)
	foreach(arg ${ARGN})
		list(APPEND expression ${dirname}/${arg})
	endforeach()
	file(GLOB srcfiles LIST_DIRECTORIES false ${expression})

	file(RELATIVE_PATH group_name ${CMAKE_CURRENT_SOURCE_DIR} ${dirname})

	if(NOT ${group_name} STREQUAL "")
		#message(WARNING ${group_name})
		string(REPLACE "/" "\\" group_name ${group_name})
		source_group(${group_name} FILES ${srcfiles})
	endif()

	set(src_dirname)
	list(APPEND src_dirname ${srcfiles})
	set(ret_${dirname} ${src_dirname} PARENT_SCOPE)
	#message(WARNING ${src_dirname})

	#cant be scene in this scope
	#message(WARNING ${ret_${dirname}})
endfunction()

function(add_source_dir dirname)
	add_source_file(${dirname} ${ARGN})
	list(APPEND out_tmp ${ret_${dirname}})

	file(GLOB subdirs ${dirname}/*)
	foreach(subdir ${subdirs})
		if(IS_DIRECTORY ${subdir})
			#message(WARNING ${subdir})
			add_source_file(${subdir} ${ARGN})
			list(APPEND out_tmp ${ret_${subdir}})
		endif()
	endforeach()

	set(ret_${dirname} ${out_tmp} PARENT_SCOPE)
endfunction()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#include(CMakePreGen.cmake)
#find_package(Vulkan COMPONENTS SPIRV-Tools REQUIRED)

if(MSVC)
	add_definitions(-DWINDOWS_ENABLED "/wd4244")
endif()

option(build_editor "" true)
option(with_gles3 "" false)
option(with_vulkan "" true)

if(build_editor)
	add_definitions(-DTOOLS_ENABLED)
endif()
if(with_gles3)
	add_definitions(-DGLES3_ENABLED -DGLAD_ENABLED)
endif()
if(with_vulkan)
	add_definitions(-DVULKAN_ENABLED)
endif()

option(enable_debug "" true)
option(enable_develop "" false)

if(enable_develop)
	add_definitions(-DDEV_ENABLED)
endif()

if(enable_debug)
	add_definitions(-DDEBUG_ENABLED)
endif()

add_definitions(-DTYPED_METHOD_BIND)

if(MSVC)
	add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
	add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
	add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/bigobj>")

	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4305 /wd4267")
endif()

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/gen)
include_directories(${CMAKE_SOURCE_DIR}/platform/${CMAKE_HOST_SYSTEM_NAME})

set(third_dir CACHE PATH FORCE)
if(EXISTS third_dir)
	set(third_inc ${third_dir}/include)
	set(third_lib ${third_dir}/lib)
endif()

set(thirdin_dir ${CMAKE_SOURCE_DIR}/thirdparty)

set(gen_dir ${CMAKE_SOURCE_DIR}/gen)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_subdirectory(core)
add_subdirectory(scene)
add_subdirectory(drivers)
add_subdirectory(editor)
add_subdirectory(servers)
add_subdirectory(modules)
add_subdirectory(platform)
add_subdirectory(thirdparty)
add_subdirectory(main)

#add_subdirectory(tests)
