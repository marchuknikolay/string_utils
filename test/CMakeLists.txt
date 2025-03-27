find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME}_test
    string_utils_test.cpp
)

target_link_libraries(${PROJECT_NAME}_test
    PRIVATE
        ${PROJECT_NAME}
        GTest::gtest_main
)