cmake_minimum_required(VERSION 3.24)

set(target_name manifold)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE target_src "*.h" "*.cpp")

add_library(${target_name} STATIC ${target_src})

set_target_properties(${target_name} PROPERTIES FOLDER "third")

target_compile_definitions(${target_name} PRIVATE WEBP_DLL MANIFOLD_PAR=-1)

target_include_directories(${target_name} PRIVATE ${target_dir})
target_include_directories(${target_name} PRIVATE ${target_dir}/include)

target_include_directories(${target_name} PRIVATE ${third_dir}/zlib)

target_link_libraries(${target_name} PRIVATE zlib)
