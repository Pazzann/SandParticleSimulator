cmake_minimum_required(VERSION 3.29)
project(SandParticleSimulator)

set(CMAKE_CXX_STANDARD 20)

set(SFML_DIR lib/SFML-2.6.1/lib/cmake/SFML)
set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.6.1 COMPONENTS graphics window system REQUIRED)

add_executable(SandParticleSimulator main.cpp
        classes/PlayField.cpp
        classes/PlayField.h
        classes/Particle.cpp
        classes/Particle.h
        classes/Simulator.cpp
        classes/Simulator.h
        classes/ParticleTypes.h
        classes/Particles.h
        classes/Point.cpp
        classes/Point.h
)
target_link_libraries(SandParticleSimulator sfml-graphics sfml-window sfml-system)
#target_link_libraries(SandParticleSimulator lib/SFML-2.6.1/lib/libsfml-graphics.a lib/SFML-2.6.1/lib/libsfml-window.a lib/SFML-2.6.1/lib/libsfml-system.a lib/SFML-2.6.1/lib/libsfml-audio.a lib/SFML-2.6.1/lib/libsfml-network.a)
#target_include_directories(SandParticleSimulator PRIVATE lib/SFML-2.6.1/include)
