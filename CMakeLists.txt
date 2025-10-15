cmake_minimum_required(VERSION 3.15)
project(tlm_soc CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall")

set(VERILATOR_ROOT $ENV{VERILATOR_ROOT})
if(NOT VERILATOR_ROOT)
    set(VERILATOR_ROOT "/tools/sw-tools/verilator/v5.038/share/verilator")
endif()

add_library(systemc STATIC IMPORTED)
set_target_properties(systemc PROPERTIES
    IMPORTED_LOCATION /tools/sw-tools/systemc/3.0.1/lib64/libsystemc.a
    INTERFACE_INCLUDE_DIRECTORIES /tools/sw-tools/systemc/3.0.1/include
)

add_library(ambachicast STATIC IMPORTED)
set_target_properties(ambachicast PROPERTIES
        IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/noc_model/ambachicast/lib/libambachicast.a
        INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_SOURCE_DIR}/noc_model/ambachicast/include
)

add_library(verilated_model STATIC IMPORTED)
set_target_properties(verilated_model PROPERTIES
        IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/noc_model/libVsig_topology_top.a
        INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_SOURCE_DIR}/noc_model
)

add_library(tlm_top STATIC IMPORTED)
set_target_properties(tlm_top PROPERTIES
        IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/noc_model/lib/libtlm_top.a
        INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_SOURCE_DIR}/noc_model
)

add_custom_target(noc_model
    COMMAND ${CMAKE_MAKE_PROGRAM} -C ${CMAKE_SOURCE_DIR}/noc_model design_top -j 16
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/noc_model
    COMMENT "Build noc model"
)

add_custom_target(clean_all
    COMMAND ${CMAKE_MAKE_PROGRAM} -C ${CMAKE_SOURCE_DIR}/noc_model clean
    COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target clean
    COMMENT "Clean noc_model and main"
)

add_custom_target(clean_noc
    COMMAND ${CMAKE_MAKE_PROGRAM} -C ${CMAKE_SOURCE_DIR}/noc_model clean
    COMMAND rm -rf ${CMAKE_SOURCE_DIR}/noc_model/ambachicast
    COMMAND /bin/bash -c "tar -xf ambachicast.tgz"
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/noc_model
    COMMENT "Clean noc_model"
)

add_executable(main src/main.cpp)
target_include_directories(main PUBLIC include)
target_link_libraries(main
        -Wl,--start-group
        tlm_top
        ambachicast
        verilated_model
        systemc
        -Wl,--end-group
        pthread
)

target_include_directories(main PRIVATE ${VERILATOR_ROOT}/include)

target_sources(main PRIVATE
        ${VERILATOR_ROOT}/include/verilated.cpp
        ${VERILATOR_ROOT}/include/verilated_vcd_c.cpp
        ${VERILATOR_ROOT}/include/verilated_vcd_sc.cpp
        ${VERILATOR_ROOT}/include/verilated_threads.cpp
)

add_dependencies(main noc_model)
