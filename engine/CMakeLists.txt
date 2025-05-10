# Build a dynamic library
add_library(engine SHARED src/Engine/Application.cpp
        src/Engine/Log.cpp
)

# Public include directory  (public so the client can access headers)
target_include_directories(engine
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include
)


# Defining platform-specific macro (for now linux only) [set platform linux and build as .so file]
target_compile_definitions(engine PUBLIC ENGINE_PLATFORM_LINUX ENGINE_BUILD_SO)

# Hide all symbols by default, then use __attribute__((visibility("default"))) to expose needed ones
target_compile_options(engine PRIVATE -fvisibility=hidden)