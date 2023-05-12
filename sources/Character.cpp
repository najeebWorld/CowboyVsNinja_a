#include "Character.hpp"
#include <string>

using namespace ariel;

// Constructor
Character::Character(std::string Name, Point &location) {
    // TODO: Implement
}

// Copy constructor
Character::Character(Character& other) {
    // TODO: Implement
}

// Destructor
Character::~Character() {
    // TODO: Implement
}

// Method to check if Character is alive
bool Character::isAlive() {
    // TODO: Implement
    return false; // placeholder
}

// Method to calculate distance to other Character
double Character::distance(Character* other) {
    // TODO: Implement
    return 0.0; // placeholder
}

// Method to apply damage to Character
void Character::hit(int hitting_points) {
    // TODO: Implement
}

// Method to get the name of the Character
std::string Character::getName() {
    // TODO: Implement
    return ""; // placeholder
}

// Method to get the location of the Character
Point Character::getLocation() {
    // TODO: Implement
    return Point(); // placeholder
}

// Method to print the Character
std::string Character::print() {
    // TODO: Implement
    return ""; // placeholder
}

// Copy assignment operator
Character& Character::operator=(const Character& other) {
    // TODO: Implement
    return *this; // placeholder
}
