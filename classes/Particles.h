//
// Created by manto on 11/13/2024.
//

#ifndef SANDPARTICLESIMULATOR_PARTICLES_H
#define SANDPARTICLESIMULATOR_PARTICLES_H

#include "Particle.h"

namespace SandParticleSimulator {
    const Particle particles[] = {
            Particle(ParticleType::AIR, 0, 0, 0, 0),
            Particle(ParticleType::WATER, 1, 1, 0, 0),
            Particle(ParticleType::SAND, 2, 2, 0, 0),
    };
}



#endif //SANDPARTICLESIMULATOR_PARTICLES_H
