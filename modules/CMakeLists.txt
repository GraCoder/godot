cmake_minimum_required(VERSION 3.24)

set(target_name gd_modules)

project(${target_name})

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

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

	${target_dir}/websocket
)

set(target_src)
foreach(src_dir ${src_dirs})
	add_source_dir(${src_dir} *.cpp *.h)
	list(APPEND target_src ${ret_${src_dir}})
endforeach()

set(gen_dir ${CMAKE_SOURCE_DIR}/gen/modules)
add_source_dir(${gen_dir} *.cpp *.h *.cc)

add_library(${target_name} ${target_src} ${ret_${gen_dir}})

target_include_directories(${target_name} PUBLIC ${target_dir}) 

target_include_directories(${target_name} PUBLIC ${gen_dir}/gdscript)

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

