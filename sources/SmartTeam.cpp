#include "SmartTeam.hpp"

using namespace ariel;

    SmartTeam::SmartTeam(Character *leader) {
        // TODO: Implement
    }

    SmartTeam::SmartTeam(const SmartTeam& other) {
        // TODO: Implement
    }

    SmartTeam::SmartTeam(SmartTeam&& other) noexcept {
        // TODO: Implement
    }

    SmartTeam::~SmartTeam() {
        // TODO: Implement
    }

    SmartTeam& SmartTeam::operator=(const SmartTeam& other) {
        // TODO: Implement
        return *this; // placeholder
    }

    SmartTeam& SmartTeam::operator=(SmartTeam&& other) noexcept {
        // TODO: Implement
        return *this; // placeholder
    }

    void SmartTeam::add(Character *fighter) {
        // TODO: Implement
    }

    void SmartTeam::attack(SmartTeam &enemyTeam) {
        // TODO: Implement
    }

    int SmartTeam::stillAlive() const {
        // TODO: Implement
        return 0; // placeholder
    }

    void SmartTeam::print() const {
        // TODO: Implement
    }

    const std::vector<Character *> &SmartTeam::getFighters() const {
        // TODO: Implement
        return fighters; // placeholder
    }

    void SmartTeam::chooseNewLeader() {
        // TODO: Implement
    }

    Character *SmartTeam::findOptimalVictim(const SmartTeam &enemyTeam) const {
        // TODO: Implement
        return nullptr; // placeholder
    }

    void SmartTeam::optimizeAttackOrder() {
        // TODO: Implement
    }

