target_link_libraries(add)

add_executable(test_add test_add.cpp main.cpp)

find_package(GTest)
target_link_libraries(test_add gtest gtest_main)

add_test(test_add test/test_add.cpp )
