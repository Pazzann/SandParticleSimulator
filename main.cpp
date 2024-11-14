#include <iostream>
#include "SFML/Graphics.hpp"
#include "classes/Point.h"
#include "classes/Simulator.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(500, 500), "SAND!!!!!");

    SandParticleSimulator::Simulator simulator(SandParticleSimulator::Point{200, 200});

    // Главный цикл приложения. Выполняется, пока открыто окно
    while (window.isOpen())
    {
        simulator.Render(window);
    }
    return 0;
}
