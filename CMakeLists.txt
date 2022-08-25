cmake_minimum_required(VERSION 3.10.2)

# Apple: Must be set before enable_language() or project() as it may influence configuration of the toolchain and flags.

project(Distortion_brown_model)

add_subdirectory(src)

add_executable(Distortion_brown_model
        main.cpp
        )
target_link_libraries(Distortion_brown_model
        PUBLIC
        imgui
        distortion-interfaces
        )

