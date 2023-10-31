cmake_minimum_required(VERSION 3.24)

set(target_name gd_platform)

project(${target_name})

set(src_dir ${CMAKE_CURRENT_SOURCE_DIR}/windows)
add_source_file(${src_dir} *.cpp *.h *.cc)
set(export_dir ${src_dir}/export)
add_source_file(${export_dir} *.cpp *.h *.cc)

#set(target_src
#	windows/crash_handler_windows.cpp
#	windows/crash_handler_windows.h
#	windows/display_server_windows.cpp
#	windows/display_server_windows.h
#	windows/gl_manager_windows.cpp
#	windows/gl_manager_windows.h
#	windows/godot_windows.cpp
#	windows/key_mapping_windows.cpp
#	windows/key_mapping_windows.h
#	windows/lang_table.h
#	windows/os_windows.cpp
#	windows/os_windows.h
#	windows/platform_config.h
#	windows/tts_windows.cpp
#	windows/tts_windows.h
#	windows/vulkan_context_win.cpp
#	windows/vulkan_context_win.h
#	windows/windows_terminal_logger.cpp
#	windows/windows_terminal_logger.h
#)

set(gen_dir ${CMAKE_SOURCE_DIR}/gen/platform)
add_source_dir(${gen_dir} *.cpp *.h *.cc)

set(prj_rc
	windows/godot_res.rc
	windows/godot_res_wrap.rc
)

add_library(${target_name} ${target_src} ${ret_${src_dir}} ${ret_${gen_dir}} ${ret_${export_dir}} ${prj_rc})

target_compile_definitions(${target_name} PRIVATE NOMINMAX VK_USE_PLATFORM_WIN32_KHR )


target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${target_name} PRIVATE ${Vulkan_INCLUDE_DIR})
target_include_directories(${target_name} PRIVATE ${Vulkan_INCLUDE_DIR}/vma)
target_include_directories(${target_name} PRIVATE ${Vulkan_INCLUDE_DIR}/vulkan)

target_include_directories(${target_name} PRIVATE ${gen_dir}/windows/export)

target_include_directories(${target_name} PRIVATE ${third_inc})


target_link_libraries(${target_name} PRIVATE gd_drivers)
target_link_libraries(${target_name} PRIVATE 
	Winmm.lib 
	Dwrite.lib 
	Dwmapi.lib 
	Avrt.lib 
	Imm32.lib 
	wbemuuid.lib 
	Bcrypt.lib 
	Crypt32.lib
	dinput8.lib 
	Dbghelp.lib
	dxguid.lib
)
