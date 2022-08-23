cmake_minimum_required(VERSION 3.10.2)

# Apple: Must be set before enable_language() or project() as it may influence configuration of the toolchain and flags.

project(hell_imgui)

find_package(Vulkan)
find_package(VulkanHeaders)
find_package(SDL2 REQUIRED)
add_executable(hello_imgui
        "${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui.cpp"
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/examples/example_sdl_vulkan/main.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui_demo.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui_tables.cpp
        "${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui_draw.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui_widgets.cpp"

        "${CMAKE_CURRENT_SOURCE_DIR}/imgui/backends/imgui_impl_vulkan.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/imgui/backends/imgui_impl_sdl.cpp"
        )
target_link_libraries(hello_imgui PUBLIC
        Vulkan::Vulkan
        ${SDL2_LIBRARIES})
target_include_directories(hello_imgui PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/backends
        ${SDL2_INCLUDE_DIRS})