cmake_minimum_required(VERSION 3.24)

set(target_name csg)

project(${target_name})

set(target_dir ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE target_source "*.cpp" "*.h")

set(manifold_source
    "src/boolean_result.cpp"
    "src/boolean3.cpp"
    "src/constructors.cpp"
    "src/csg_tree.cpp"
    "src/edge_op.cpp"
    "src/face_op.cpp"
    "src/impl.cpp"
    "src/manifold.cpp"
    "src/polygon.cpp"
    "src/properties.cpp"
    "src/quickhull.cpp"
    "src/sdf.cpp"
    "src/smoothing.cpp"
    "src/sort.cpp"
    "src/subdivision.cpp"
    "src/tree2d.cpp"
)

foreach(mf ${manifold_source})
list(APPEND target_source "${third_dir}/manifold/${mf}")
endforeach()

add_library(${target_name} ${target_source})

set_target_properties(${target_name} PROPERTIES FOLDER "modules")

target_compile_definitions(${target_name} PRIVATE MANIFOLD_PAR=-1)

target_include_directories(${target_name} PRIVATE ${third_dir}/zlib)
target_include_directories(${target_name} PRIVATE ${third_dir}/manifold/include)

target_link_libraries(${target_name} PRIVATE zlib)
