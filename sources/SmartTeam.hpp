#ifndef SMARTTEAM_HPP
#define SMARTTEAM_HPP
#pragma once
#include <vector>
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "Team.hpp"

namespace ariel{
class SmartTeam {
private:
    std::vector<Character *> fighters;
    Character *leader;

    void chooseNewLeader();
    Character *findOptimalVictim(const SmartTeam &enemyTeam) const;
    void optimizeAttackOrder();

public:
    SmartTeam(Character *leader);
    ~SmartTeam();

    void add(Character *fighter);
    void attack(SmartTeam &enemyTeam);
    int stillAlive() const;
    void print() const;

    // Accessor methods for the enemy team to query positions and status
    const std::vector<Character *> &getFighters() const;
};
}


#endif // SMARTTEAM_HPP