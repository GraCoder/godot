cmake_minimum_required(VERSION 3.24)

set(target_name freetype)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(src_dirs
	${target_dir}/include
	${target_dir}/include/freetype
	${target_dir}/include/freetype/internal
)

set(prj_src_files
	src/autofit/autofit.c
    src/base/ftbase.c
    src/base/ftbbox.c
    src/base/ftbdf.c
    src/base/ftbitmap.c
    src/base/ftcid.c
    src/base/ftdebug.c
    src/base/ftfstype.c
    src/base/ftgasp.c
    src/base/ftglyph.c
    src/base/ftgxval.c
    src/base/ftinit.c
    src/base/ftmm.c
    src/base/ftotval.c
    src/base/ftpatent.c
    src/base/ftpfr.c
    src/base/ftstroke.c
    src/base/ftsynth.c
    src/base/ftsystem.c
    src/base/fttype1.c
    src/base/ftwinfnt.c
    src/bdf/bdf.c
    src/bzip2/ftbzip2.c
    src/cache/ftcache.c
    src/cff/cff.c
    src/cid/type1cid.c
    src/gxvalid/gxvalid.c
    src/gzip/ftgzip.c
    src/lzw/ftlzw.c
    src/otvalid/otvalid.c
    src/pcf/pcf.c
    src/pfr/pfr.c
    src/psaux/psaux.c
    src/pshinter/pshinter.c
    src/psnames/psnames.c
    src/raster/raster.c
	  src/sfnt/sfnt.c
    src/sdf/sdf.c
    src/svg/svg.c
    src/smooth/smooth.c
    src/truetype/truetype.c
    src/type1/type1.c
    src/type42/type42.c
    src/winfonts/winfnt.c
)

set(target_src)

foreach(src_dir ${src_dirs})
	add_source_dir(${src_dir} *.h *.c)
	list(APPEND target_src ${ret_${src_dir}})
endforeach()

add_library(${target_name} SHARED ${target_src} ${prj_src_files})

target_compile_definitions(${target_name} PRIVATE FT2_BUILD_LIBRARY  DLL_EXPORT FT_CONFIG_OPTION_USE_BROTLI)

set_target_properties(${target_name} PROPERTIES FOLDER "third")

target_include_directories(${target_name} PRIVATE ${target_dir})
target_include_directories(${target_name} PRIVATE ${target_dir}/include)

target_include_directories(${target_name} PRIVATE  ${thirdin_dir}/zlib ${thirdin_dir}/brotli/include)

target_include_directories(${target_name} PRIVATE ${third_inc})

target_link_libraries(${target_name} PRIVATE brotli)
