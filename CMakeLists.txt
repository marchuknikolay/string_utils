cmake_minimum_required(VERSION 3.15)
project(mmarchuk_string_utils)

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

install(
    TARGETS ${PROJECT_NAME}
    ARCHIVE DESTINATION lib
)

install(
    DIRECTORY include/
    DESTINATION include
)

enable_testing()
add_subdirectory(test)