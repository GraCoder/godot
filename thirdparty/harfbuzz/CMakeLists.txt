cmake_minimum_required(VERSION 3.24)

set(target_name harfbuzz)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(src_dirs
	${target_dir}/src
	${target_dir}/src/OT
	${target_dir}/src/OT/Layout
)

set(target_src)

foreach(src_dir ${src_dirs})
	add_source_dir(${src_dir} *.cc *.hh *.c)
	list(APPEND target_src ${ret_${src_dir}})
endforeach()

add_library(${target_name} SHARED ${target_src})

target_compile_definitions(${target_name} PRIVATE HB_DLL_EXPORT HAVE_ICU HAVE_FREETYPE)

set_target_properties(${target_name} PROPERTIES FOLDER "third")

target_include_directories(${target_name} PRIVATE ${target_dir})

#target_include_directories(${target_name} PRIVATE ${third_inc})
#target_link_directories(${target_name} PRIVATE ${third_lib})

target_include_directories(${target_name} PRIVATE ${thirdin_dir}/freetype/include)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/icu4c/common)

target_link_libraries(${target_name} PRIVATE icu4c freetype)
