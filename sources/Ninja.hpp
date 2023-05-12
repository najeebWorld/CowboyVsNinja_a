#ifndef NINJA_HPP
#define NINJA_HPP
#pragma once
#include "Character.hpp"

namespace ariel {
class Ninja : public Character {
private:

    int speed;

public:
    Ninja(string name,Point location);

    virtual void move(Character *enemy);

    virtual void slash(Character *enemy) const;

    string print() override;
};
}
#endif // NINJA_HPP