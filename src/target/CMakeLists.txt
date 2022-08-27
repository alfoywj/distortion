
add_executable(Distortion_brown_model
        main.cpp
        )
target_link_libraries(Distortion_brown_model
        PUBLIC
        imgui
        ote-usecase
        )