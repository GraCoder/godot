cmake_minimum_required(VERSION 3.24)

set(target_name thorvg)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(src_dirs
	${target_dir}/src/common
	${target_dir}/src/loaders
	${target_dir}/src/renderer
)

set(target_src)

foreach(src_dir ${src_dirs})
	add_source_dir(${src_dir} *.cpp *.h *.c)
	list(APPEND target_src ${ret_${src_dir}})
endforeach()

add_library(${target_name} SHARED ${target_src})

target_compile_definitions(${target_name} PRIVATE -DTVG_BUILD=1)

set_target_properties(${target_name} PROPERTIES FOLDER "third")

target_include_directories(${target_name} PRIVATE ${target_dir}/inc)
target_include_directories(${target_name} PRIVATE ${target_dir}/src/common)
target_include_directories(${target_name} PRIVATE ${target_dir}/src/loaders/tvg)
target_include_directories(${target_name} PRIVATE ${target_dir}/src/loaders/svg)
target_include_directories(${target_name} PRIVATE ${target_dir}/src/loaders/jpg)
target_include_directories(${target_name} PRIVATE ${target_dir}/src/loaders/raw)
target_include_directories(${target_name} PRIVATE ${target_dir}/src/savers/tvg)
target_include_directories(${target_name} PRIVATE ${target_dir}/src/renderer)
target_include_directories(${target_name} PRIVATE ${target_dir}/src/renderer/sw_engine)
target_include_directories(${target_name} PRIVATE ${target_dir}/src/loaders/external_png)

target_link_libraries(${target_name} PRIVATE libpng)

target_include_directories(${target_name} PRIVATE ${third_inc})
