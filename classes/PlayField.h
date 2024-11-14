//
// Created by manto on 11/13/2024.
//

#ifndef SANDPARTICLESIMULATOR_PLAYFIELD_H
#define SANDPARTICLESIMULATOR_PLAYFIELD_H

#include <vector>
#include <memory>
#include "Point.h"
#include "Particle.h"
#include "Particles.h"

namespace SandParticleSimulator {
    class PlayField {

    private:
        const Point size;
        std::vector<std::vector<Particle>> field;
    public:
        const Point &getSize() const {
            return size;
        }
        std::vector<std::vector<Particle>> &getField() {
            return field;
        }
        PlayField(Point size) : size(size) {
            field = std::vector<std::vector<Particle>>(size.x, std::vector<Particle>(size.y, SandParticleSimulator::particles[0]));
        };
    };
}


#endif //SANDPARTICLESIMULATOR_PLAYFIELD_H
