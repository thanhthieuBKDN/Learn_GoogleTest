cmake_minimum_required(VERSION 3.10.0)
project(testing VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Thêm thư mục src vào đường dẫn include
include_directories(src)
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    set(CMAKE_CXX_FLAGS "--coverage -O0 -g -fprofile-arcs -ftest-coverage")
    set(CMAKE_EXE_LINKER_FLAGS "--coverage")
endif()

add_executable(Run  
    ${CMAKE_CURRENT_SOURCE_DIR}/test/unittest.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/math.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/math.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/phanso.cpp
)
add_subdirectory(googletest)
target_link_libraries(Run 
    gtest 
    gtest_main
    gmock
)
include(CTest)
enable_testing()
