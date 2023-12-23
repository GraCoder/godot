cmake_minimum_required(VERSION 3.24)

set(target_name vulkan)

option(with_volk "" true)

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE target_source ${target_dir}/*.cpp)
source_group(TREE ${target_dir} FILES ${target_source})

if(with_volk)
list(APPEND target_source ${target_dir}/../volk/volk.c)
endif()

add_library(${target_name} ${target_source})

set_target_properties(${target_name} PROPERTIES FOLDER "third")

target_compile_definitions(${target_name} PUBLIC VK_USE_PLATFORM_WIN32_KHR)
target_compile_definitions(${target_name} PRIVATE VMA_STATIC_VULKAN_FUNCTIONS=1)

if(with_volk)
	list(APPEND src_dirs ${target_dir}/volk)
	target_compile_definitions(${target_name} PUBLIC USE_VOLK)
	target_include_directories(${target_name} PUBLIC ${thirdin_dir}/volk)
endif()

target_include_directories(${target_name} PUBLIC ${target_dir}/include)
target_include_directories(${target_name} PRIVATE ${thirdin_dir}/vulkan)
