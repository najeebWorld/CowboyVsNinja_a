#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#pragma once
#include "Point.hpp"
#include <string>

namespace ariel{
class Character {
private:
    Point location;
    int hitPoints;
    std::string name;
    char type;

public:
    Character(string Name, Point &location);
    Character(Character& other);

    virtual ~Character();
    virtual bool isAlive();
    virtual double distance(Character* other);
    virtual void hit(int hitting_points);
    virtual string getName();
    virtual Point getLocation();
    virtual string print();

    Character& operator=(const Character& other);
};
}

#endif // CHARACTER_HPP