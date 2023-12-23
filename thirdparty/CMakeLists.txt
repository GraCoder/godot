cmake_minimum_required(VERSION 3.24)

set(target_name thirdin)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

option(enable_opt_third_lib "" true)
if(enable_opt_third_lib)
	set(CONFIG_SUFFIX
		"_DEBUG"
		"_RELWITHDEBINFO"
	)
	foreach(sfix ${CONFIG_SUFFIX})
		set(config CMAKE_C_FLAGS${sfix})
		string(REPLACE "/RTC1" "" ${config} ${${config}})
		set(${config} "${${config}} -O2 -Ob2")

		set(config CMAKE_CXX_FLAGS${sfix})
		string(REPLACE "/RTC1" "" ${config} ${${config}})
		set(${config} "${${config}} -O2 -Ob2")

		string(REPLACE "/debug" "" CMAKE_SHARED_LINKER_FLAGS${sfix} ${CMAKE_SHARED_LINKER_FLAGS${sfix}})
	endforeach()
endif()

add_subdirectory(thorvg)
add_subdirectory(glslang)
add_subdirectory(harfbuzz)
add_subdirectory(mbedtls)
add_subdirectory(zstd)
add_subdirectory(zlib)
add_subdirectory(libpng)
add_subdirectory(icu4c)
add_subdirectory(brotli)
add_subdirectory(freetype)
add_subdirectory(amd-fsr2)
add_subdirectory(misc)
add_subdirectory(vulkan)

set(src_dirs
	${target_dir}/basis_universal
	${target_dir}/minizip
	${target_dir}/spirv-reflect
	${target_dir}/rvo2
	${target_dir}/recastnavigation/Recast
	${target_dir}/jpeg-compressor
	#${target_dir}/vulkan
	#${target_dir}/glad
	#${target_dir}/misc
	#${target_dir}/wslay
)

set(target_source)
foreach(src_dir ${src_dirs})
	file(GLOB_RECURSE source ${src_dir}/*.cpp ${src_dir}/*.cc ${src_dir}/*.c)
	list(APPEND target_source ${source})
endforeach()
source_group(TREE ${target_dir} FILES ${target_source})

add_library(${target_name} ${target_source})

target_include_directories(${target_name} PRIVATE ${target_dir})
target_include_directories(${target_name} PRIVATE ${target_dir}/zlib)
target_include_directories(${target_name} PRIVATE ${target_dir}/glad)
target_include_directories(${target_name} PRIVATE ${target_dir}/recastnavigation/Recast/Include)
target_include_directories(${target_name} PRIVATE ${target_dir}/zstd)
#target_include_directories(${target_name} PRIVATE ${target_dir}/wslay)

target_include_directories(${target_name} PRIVATE ${third_inc})

target_link_directories(${target_name} PRIVATE ${third_lib})

target_link_libraries(${target_name} PRIVATE thorvg glslang harfbuzz mbedtls zstd zlib libpng amd-fsr2 misc)
