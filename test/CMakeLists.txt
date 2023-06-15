cmake_minimum_required(VERSION 3.0.0)
project(Example VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)

include(CTest)
enable_testing()

add_executable(Example main.cpp)

target_link_libraries(Example QMetaClass)

#output the bin to be same as the library of QMetaClass, easier to debug shared/dll library
set_target_properties( Example
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/"
)

if (UNIX)
    # in unix, executable name should not be same as folder name
    set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "${PROJECT_NAME}Exe")
endif(UNIX)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
