cmake_minimum_required(VERSION 3.24)

set(target_name tests)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR}/basic)

add_source_dir(${target_dir} *.cpp *.h *.cc)

add_executable(${target_name} ${ret_${target_dir}})

target_compile_definitions(${target_name} PRIVATE NO_EDITOR_SPLASH NO_DEFAULT_BOOT_LOGO)

target_include_directories(${target_name} PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(${target_name} PRIVATE gd_core gd_scene gd_servers thirdin)

target_include_directories(${target_name} PUBLIC ${third_inc})
target_link_directories(${target_name} PRIVATE ${third_lib})

