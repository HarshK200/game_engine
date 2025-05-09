# Build a dynamic library
add_library(engine SHARED src/Test.cpp)

# Public include directory for other targets to use
target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)