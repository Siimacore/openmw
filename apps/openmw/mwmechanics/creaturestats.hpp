#ifndef GAME_MWMECHANICS_CREATURESTATS_H
#define GAME_MWMECHANICS_CREATURESTATS_H

#include "stat.hpp"

namespace MWMechanics
{
    struct CreatureStats
    {
        Stat<int> mAttributes[8];
    };
}

#endif

