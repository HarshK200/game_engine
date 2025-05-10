# Build a dynamic library
add_library(engine SHARED src/Engine/Application.cpp)

# Public include directory for other targets to use
target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Defining platform macro (for linux only)
target_compile_definitions(engine PUBLIC ENGINE_PLATFORM_LINUX)