cmake_minimum_required(VERSION 3.24)

set(target_name thirdin)

project(${target_name})

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

option(ENABLE_OPT_THIRDLIB "" true)
if(ENABLE_OPT_THIRDLIB)
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

set(src_dirs
	${target_dir}/basis_universal
	${target_dir}/misc
	${target_dir}/minizip
	${target_dir}/vulkan
	${target_dir}/spirv-reflect
	#${target_dir}/glad
	${target_dir}/rvo2
	${target_dir}/recastnavigation/Recast
	${target_dir}/jpeg-compressor
	${target_dir}/wslay
)

set(target_src)

foreach(src_dir ${src_dirs})
	add_source_dir(${src_dir} *.cpp *.h *.c)
	list(APPEND target_src ${ret_${src_dir}})
endforeach()

add_library(${target_name} ${target_src})

target_include_directories(${target_name} PRIVATE ${Vulkan_INCLUDE_DIR})
target_include_directories(${target_name} PRIVATE ${target_dir}/glad)
target_include_directories(${target_name} PRIVATE ${target_dir}/recastnavigation/Recast/Include)
target_include_directories(${target_name} PRIVATE ${target_dir}/wslay)

target_include_directories(${target_name} PRIVATE ${third_inc})

target_link_directories(${target_name} PRIVATE ${third_lib})

target_link_libraries(${target_name} PRIVATE thorvg glslang harfbuzz mbedtls zstd zlib libpng amd-fsr2)

target_link_libraries(${target_name} PRIVATE ${Vulkan_LIBRARY})
