cmake_minimum_required(VERSION 3.15)
project(tlm_soc CXX)

find_package(SystemCLanguage REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)

enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall")

set(VERILATOR_ROOT $ENV{VERILATOR_ROOT})
if(NOT VERILATOR_ROOT)
    set(VERILATOR_ROOT "/tools/sw-tools/verilator/v5.038/share/verilator")
endif()

get_target_property(SYSTEMC_INCLUDE_DIRS SystemC::systemc INTERFACE_INCLUDE_DIRECTORIES)
get_target_property(SPDLOG_INCLUDE_DIRS spdlog::spdlog INTERFACE_INCLUDE_DIRECTORIES)
get_target_property(GTEST_INCLUDE_DIRS GTest::gtest INTERFACE_INCLUDE_DIRECTORIES)

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

set(COMMON_TEST_FILES
    src/SimpleRnInitiator.cpp
    src/SimpleSnTarget.cpp
    src/main.cpp)

add_executable(WriteTransactionWithNoSnoopTest)
target_include_directories(WriteTransactionWithNoSnoopTest PUBLIC
    include
    ${SPDLOG_INCLUDE_DIRS}
    ${SYSTEMC_INCLUDE_DIRS}
    ${GTEST_INCLUDE_DIRS})

target_include_directories(WriteTransactionWithNoSnoopTest PRIVATE ${VERILATOR_ROOT}/include)

target_sources(WriteTransactionWithNoSnoopTest PRIVATE
    ${VERILATOR_ROOT}/include/verilated.cpp
    ${VERILATOR_ROOT}/include/verilated_vcd_c.cpp
    ${VERILATOR_ROOT}/include/verilated_vcd_sc.cpp
    ${VERILATOR_ROOT}/include/verilated_threads.cpp)

target_sources(WriteTransactionWithNoSnoopTest PUBLIC
    src/WriteTransactionTest/WriteTransactionWithNoSnoopTest.cpp
    ${COMMON_TEST_FILES})

target_link_libraries(WriteTransactionWithNoSnoopTest
        -Wl,--start-group
        tlm_top
        ambachicast
        verilated_model
        -Wl,--end-group
        pthread
        SystemC::systemc
        spdlog::spdlog
        gtest::gtest
)

add_dependencies(WriteTransactionWithNoSnoopTest noc_model)
