cmake_minimum_required(VERSION 3.0.0)
project(Example VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)

include(CTest)
enable_testing()

add_executable(Example main.cpp)

target_compile_definitions(Example PRIVATE QT_STATIC)   #when qt library is build as static
# target_compile_definitions(Example PRIVATE QT_SHARED)   #when qt library is build as static
target_link_libraries(Example QMetaClass)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
