#include "Character.hpp"

using namespace ariel;
    Character::Character(std::string Name, Point location) {
        // TODO: Implement
    }

    Character::Character(const Character& other) {
        // TODO: Implement
    }

    Character::Character(Character&& other) noexcept {
        // TODO: Implement
    }

    Character::~Character() {
        // TODO: Implement
    }

    Character& Character::operator=(const Character& other) {
        // TODO: Implement
        return *this;
    }

    Character& Character::operator=(Character&& other) noexcept {
        // TODO: Implement
        return *this;
    }

    bool Character::isAlive() {
        // TODO: Implement
        return false; // placeholder
    }

    double Character::distance(Character* other) {
        // TODO: Implement
        return 0.0; // placeholder
    }

    void Character::hit(int hitting_points) {
        // TODO: Implement
    }

    std::string Character::getName() {
        // TODO: Implement
        return ""; // placeholder
    }

    Point Character::getLocation() {
        // TODO: Implement
        return Point(); // placeholder
    }

    std::string Character::print() {
        // TODO: Implement
        return ""; // placeholder
    }


