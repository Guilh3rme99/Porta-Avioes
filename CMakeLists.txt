project(PortaAvioes)
add_executable(${PROJECT_NAME} camera.cpp ground.cpp main.cpp openglwindow.cpp ship.cpp rex.cpp)
enable_abcg(${PROJECT_NAME})
