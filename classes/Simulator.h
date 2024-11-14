//
// Created by manto on 11/13/2024.
//

#ifndef SANDPARTICLESIMULATOR_SIMULATOR_H
#define SANDPARTICLESIMULATOR_SIMULATOR_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <iostream>
#include "Point.h"
#include "PlayField.h"
#include "ParticleTypes.h"
#include "Particle.h"

namespace SandParticleSimulator{
    class Simulator {
    private:
        const int blockSize = 2;
        PlayField playField;
    public:
        Simulator(Point size) : playField(size) {};
        void Render(sf::RenderWindow &window) {
            // Обрабатываем очередь событий в цикле
            sf::Event event;
            while (window.pollEvent(event))
            {
                // Пользователь нажал на «крестик» и хочет закрыть окно?
                if (event.type == sf::Event::Closed)
                    // тогда закрываем его
                    window.close();

                if (event.type == sf::Event::Resized) {
                    sf::FloatRect view(0, 0, event.size.width, event.size.height);
                    window.setView(sf::View(view));
                }

                if (event.type == sf::Event::MouseButtonPressed) {
                    if (event.mouseButton.button == sf::Mouse::Left) {
                        // Handle left mouse button click
                        int x = event.mouseButton.x;
                        int y = event.mouseButton.y;

                        // Add your logic here
                        if(x/blockSize < playField.getSize().x && y/blockSize < playField.getSize().y){
                            playField.getField()[x/blockSize][y/blockSize] = particles[2];
                        }
                    }
                }
            }
            // Отрисовка окна
            window.clear(sf::Color(255, 100, 100));
            for (int i = 0; i < playField.getSize().x; i++) {
                for (int j = 0; j < playField.getSize().y; j++) {
                    Particle particle = playField.getField()[i][j];
                    sf::RectangleShape rectangle(sf::Vector2f(blockSize, blockSize));
                    if (particle.getType() == ParticleType::SAND) {
                        //it sets but the color is not changing
                        std::cout << "SAND" << std::endl;
                        rectangle.setFillColor(sf::Color::Yellow);
                    } else if (particle.getType() == ParticleType::WATER) {
                        rectangle.setFillColor(sf::Color::Blue);
                    } else if (particle.getType() == ParticleType::AIR) {
                        rectangle.setFillColor(sf::Color::White);
                    }
                    rectangle.setPosition(i * blockSize, j * blockSize);
                    window.draw(rectangle);
                }
            }


            window.display();
        }
    };
};



#endif //SANDPARTICLESIMULATOR_SIMULATOR_H
