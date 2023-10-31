cmake_minimum_required(VERSION 3.24)

set(target_name godot)

project(${target_name})

add_source_dir(${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.h *.cc)

add_executable(${target_name} ${ret_${CMAKE_CURRENT_SOURCE_DIR}})

target_compile_definitions(${target_name} PRIVATE NO_EDITOR_SPLASH NO_DEFAULT_BOOT_LOGO)

target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(${target_name} PRIVATE gd_core gd_scene gd_servers gd_drivers gd_modules gd_platform gd_editor thirdin)

target_include_directories(${target_name} PUBLIC ${third_inc})
target_link_directories(${target_name} PRIVATE ${third_lib})

