# Build a executable
add_executable(sandbox src/SandboxApp.cpp)

target_link_libraries(sandbox PRIVATE engine)