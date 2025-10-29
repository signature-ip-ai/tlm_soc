cmake_minimum_required(VERSION 3.15)

set(COMMON_TEST_FILES
    ${EXTERNAL_SOURCES}
    ${CMAKE_CURRENT_SOURCE_DIR}/SimpleRnInitiator.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SimpleSnTarget.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

add_subdirectory(WriteTransactionTests)
