cmake_minimum_required(VERSION 3.15)
project(string_utils)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED)

add_library(${PROJECT_NAME}
    src/string_utils.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        include
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        Boost::boost
)

add_subdirectory(test)