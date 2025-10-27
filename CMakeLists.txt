cmake_minimum_required(VERSION 3.15)
project(tlm_soc CXX)

find_package(SystemCLanguage REQUIRED)
find_package(spdlog CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall")

set(VERILATOR_ROOT $ENV{VERILATOR_ROOT})
if(NOT VERILATOR_ROOT)
    set(VERILATOR_ROOT "/tools/sw-tools/verilator/v5.038/share/verilator")
endif()

get_target_property(SYSTEMC_INCLUDE_DIRS SystemC::systemc INTERFACE_INCLUDE_DIRECTORIES)
get_target_property(SPDLOG_INCLUDE_DIRS spdlog::spdlog INTERFACE_INCLUDE_DIRECTORIES)

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
    COMMENT "Clean noc_model"
)

file(GLOB sources src/*.cpp)

add_executable(main ${sources})
target_include_directories(main PUBLIC include ${SPDLOG_INCLUDE_DIRS} ${SYSTEMC_INCLUDE_DIRS})
target_link_libraries(main
        -Wl,--start-group
        tlm_top
        ambachicast
        verilated_model
        -Wl,--end-group
        pthread
        SystemC::systemc
        spdlog::spdlog
)

target_include_directories(main PRIVATE ${VERILATOR_ROOT}/include)

target_sources(main PRIVATE
        ${VERILATOR_ROOT}/include/verilated.cpp
        ${VERILATOR_ROOT}/include/verilated_vcd_c.cpp
        ${VERILATOR_ROOT}/include/verilated_vcd_sc.cpp
        ${VERILATOR_ROOT}/include/verilated_threads.cpp
)

add_dependencies(main noc_model)
