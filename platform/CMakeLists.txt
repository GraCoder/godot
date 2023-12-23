cmake_minimum_required(VERSION 3.24)

set(target_name gd_platform)

set(target_gen_dir ${gen_dir}/platform)

set( target_source
    windows/godot_windows.cpp
    windows/crash_handler_windows.cpp
    windows/os_windows.cpp
    windows/display_server_windows.cpp
    windows/key_mapping_windows.cpp
    windows/joypad_windows.cpp
    windows/tts_windows.cpp
    windows/windows_terminal_logger.cpp
    windows/vulkan_context_win.cpp
    windows/gl_manager_windows_native.cpp
    windows/gl_manager_windows_angle.cpp
    windows/wgl_detect_version.cpp
)

file(GLOB_RECURSE target_gen_source ${target_gen_dir}/*.cpp)
source_group(TREE ${target_gen_dir} FILES ${target_gen_source})

set(prj_rc
	windows/godot_res.rc
	windows/godot_res_wrap.rc
)

add_library(${target_name} ${target_source} ${target_gen_source} ${prj_rc})

if(with_volk)
target_compile_definitions(${target_name} PUBLIC USE_VOLK)
target_include_directories(${target_name} PUBLIC ${thirdin_dir}/volk)
endif()

if(with_vulkan)
target_compile_definitions(${target_name} PUBLIC RD_ENABLED)
endif()

target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_include_directories(${target_name} PRIVATE ${gen_dir}/windows/export)

target_include_directories(${target_name} PRIVATE ${third_inc})


target_link_libraries(${target_name} PRIVATE gd_core gd_drivers vulkan)
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
