cmake_minimum_required(VERSION 3.24)

set(target_name gd_modules)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})
set(target_gen_dir ${gen_dir}/modules)

add_subdirectory(gltf)
add_subdirectory(navigation)

set(src_dirs
	${target_dir}/bmp
	${target_dir}/jpg
	${target_dir}/svg
	${target_dir}/hdr
	${target_dir}/zip
	${target_dir}/basis_universal
	${target_dir}/mbedtls
	${target_dir}/text_server_fb
	${target_dir}/text_server_adv
	${target_dir}/glslang
	${target_dir}/gdscript
	${target_dir}/jsonrpc
	${target_dir}/freetype
	${target_dir}/gridmap

	${target_dir}/csg

	#${target_dir}/websocket
)

foreach(src_dir ${src_dirs})
	file(GLOB_RECURSE source ${src_dir}/*.cpp)
	list(APPEND target_source ${source})
endforeach()
source_group(TREE ${target_dir} FILES ${target_source})

file(GLOB_RECURSE target_gen_source ${target_gen_dir}/*.cpp)
source_group(TREE ${target_gen_dir} FILES ${target_gen_source})

add_library(${target_name} ${target_source} ${target_gen_source})

target_include_directories(${target_name} PUBLIC ${target_dir}) 

target_include_directories(${target_name} PUBLIC ${target_gen_dir}/gdscript)

target_include_directories(${target_name} PRIVATE ${thirdin_dir})
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/zlib)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/mbedtls/include)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/basis_universal)

target_include_directories(${target_name} PRIVATE ${thirdin_dir}/thorvg/inc)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/thorvg/src/common)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/thorvg/src/renderer)

target_include_directories(${target_name} PRIVATE ${thirdin_dir}/glslang)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/harfbuzz/src)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/icu4c/common)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/icu4c/i18n)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/wslay)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/jpeg-compressor)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/freetype/include)

#target_link_libraries(${target_name} PRIVATE ${JPEG_LIBRARY})

target_link_libraries(${target_name} PRIVATE thirdin icu4c)

target_link_libraries(${target_name} PRIVATE navigation gltf)

