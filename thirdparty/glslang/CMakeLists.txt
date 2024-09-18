cmake_minimum_required(VERSION 3.28)

set(target_name glslang)

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(src_dirs
	${target_dir}/glslang
	${target_dir}/glslang/MachineIndependent
	${target_dir}/glslang/OSDependent/Windows
	${target_dir}/OGLCompilersDLL
	${target_dir}/SPIRV
)

set(target_source)
foreach(src_dir ${src_dirs})
	add_source_dir(${src_dir} *.cpp *.h *.c)
	list(APPEND target_source ${ret_${src_dir}})
endforeach()

source_group(TREE ${target_dir} FILES ${target_source})

add_library(${target_name} SHARED ${target_source})

set_target_properties(${target_name} PROPERTIES FOLDER "third")

target_include_directories(${target_name} PRIVATE ${target_dir})
target_include_directories(${target_name} PRIVATE ${target_dir}/OGLCompilersDLL)
target_include_directories(${target_name} PRIVATE ${third_dir}/spirv-headers/include/spirv/unified1)

#target_include_directories(${target_name} PRIVATE ${third_inc})
