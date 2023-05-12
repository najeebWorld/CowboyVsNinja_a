#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#pragma once
#include "Point.hpp"
#include <string>

namespace ariel {

class Character {
private:
    Point location;
    int hitPoints;
    std::string name;
    char type;

public:
    Character(std::string Name, Point &location);
    Character(const Character& other); // Copy constructor should take const reference
    Character(Character&& other) noexcept; // Move constructor

    virtual ~Character();
    
    Character& operator=(const Character& other); // Copy assignment operator
    Character& operator=(Character&& other) noexcept; // Move assignment operator

    virtual bool isAlive();
    virtual double distance(Character* other);
    virtual void hit(int hitting_points);
    virtual std::string getName();
    virtual Point getLocation();
    virtual std::string print();
};

}

#endif // CHARACTER_HPP
