# Build a executable
add_executable(sandbox src/Application.cpp)

target_link_libraries(sandbox PRIVATE engine)