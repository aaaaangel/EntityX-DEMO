cmake_minimum_required(VERSION 3.15)
project(EntityX_DEMO)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(components)
include_directories(systems)

# entityx
include_directories(third_party/entityx/include)
link_directories(third_party/entityx/lib)

# glfw
include_directories(third_party/glfw/include)
link_directories(third_party/glfw/lib)

# glad
include_directories(third_party/glad/include)
add_library(glad third_party/glad/src/glad.c)

add_executable(EntityX_DEMO systems/DebugLogSystem.cpp demo.cpp Application.cpp Application.h third_party/renderer/include/Shader.h third_party/renderer/src/Shader.cpp)
target_link_libraries(EntityX_DEMO entityx glfw glad)

