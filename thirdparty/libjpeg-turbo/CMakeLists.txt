cmake_minimum_required(VERSION 3.24)

set(target_name libjpeg)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

set(target_source
    "src/jaricom.c"
    "src/jcapimin.c"
    "src/jcarith.c"
    "src/jchuff.c"
    "src/jcicc.c"
    "src/jcinit.c"
    "src/jcmarker.c"
    "src/jcmaster.c"
    "src/jcomapi.c"
    "src/jcparam.c"
    "src/jcphuff.c"
    "src/jctrans.c"
    "src/jdapimin.c"
    "src/jdarith.c"
    "src/jdatadst.c"
    "src/jdatadst-tj.c"
    "src/jdatasrc.c"
    "src/jdatasrc-tj.c"
    "src/jdhuff.c"
    "src/jdicc.c"
    "src/jdinput.c"
    "src/jdmarker.c"
    "src/jdmaster.c"
    "src/jdphuff.c"
    "src/jdtrans.c"
    "src/jerror.c"
    "src/jfdctflt.c"
    "src/jmemmgr.c"
    "src/jmemnobs.c"
    "src/jpeg_nbits.c"
    "src/transupp.c"
    "src/turbojpeg.c"
)

set(bit_source
    "src/jcapistd.c"
    "src/jccoefct.c"
    "src/jccolor.c"
    "src/jcdctmgr.c"
    "src/jcmainct.c"
    "src/jcprepct.c"
    "src/jcsample.c"
    "src/jdcoefct.c"
    "src/jdcolor.c"
    "src/jdapistd.c"
    "src/jddctmgr.c"
    "src/jdmainct.c"
    "src/jdmerge.c"
    "src/jdpostct.c"
    "src/jdsample.c"
    "src/jfdctfst.c"
    "src/jfdctint.c"
    "src/jidctflt.c"
    "src/jidctfst.c"
    "src/jidctint.c"
    "src/jidctred.c"
    "src/jutils.c"
    "src/jquant1.c"
    "src/jquant2.c"
)


add_library(libjpeg_8 OBJECT ${bit_source})
target_compile_definitions(libjpeg_8 PRIVATE BITS_IN_JSAMPLE=8)
set_target_properties(libjpeg_8 PROPERTIES FOLDER "third")

add_library(libjpeg_12 OBJECT ${bit_source})
target_compile_definitions(libjpeg_12 PRIVATE BITS_IN_JSAMPLE=12)
set_target_properties(libjpeg_12 PROPERTIES FOLDER "third")

add_library(${target_name} SHARED ${target_source} $<TARGET_OBJECTS:libjpeg_8> $<TARGET_OBJECTS:libjpeg_12>)

set_target_properties(${target_name} PROPERTIES FOLDER "third")

target_compile_definitions(${target_name} PRIVATE DLLDEFINE)

target_include_directories(${target_name} PRIVATE ${target_dir})
target_include_directories(${target_name} PRIVATE ${target_dir}/src)

target_include_directories(${target_name} PRIVATE ${third_dir}/zlib)

target_link_libraries(${target_name} PRIVATE zlib)
