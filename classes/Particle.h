//
// Created by manto on 11/13/2024.
//

#ifndef SANDPARTICLESIMULATOR_PARTICLE_H
#define SANDPARTICLESIMULATOR_PARTICLE_H


#include "ParticleTypes.h"
namespace SandParticleSimulator {
    class Particle {
    private:
        int density;
        int mass;
        int color;
        int temperature;
        ParticleType type;
    public:
        const ParticleType &getType() const{
            return type;
        }

        const int &getDensity() const{
            return density;
        }

        const int &getMass() const{
            return mass;
        }

        const int &getColor() const{
            return color;
        }

        const int &getTemperature() const{
            return temperature;
        }

        Particle(ParticleType type, int density, int mass, int color, int temperature) : type(type), density(density),
                                                                                         mass(mass), color(color),temperature(temperature) {};

    };
}


#endif //SANDPARTICLESIMULATOR_PARTICLE_H
