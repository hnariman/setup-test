add_library(add STATIC add.cpp add.hpp)

target_include_directories( add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} )
