#include "doctest.h"
#include "sources/Team.hpp"
#include <vector>
#include <math.h>
#include <sstream>
#include <cmath>
using namespace ariel;
using namespace std;


TEST_SUITE("Point") {

    TEST_CASE("Testing distance between two points") {
        Point p1(2, 4);
        Point p2(6, 8);

        double expected_distance = sqrt(20);
        double actual_distance = p1.distance(p2);
        CHECK(abs(actual_distance - expected_distance) < 0.001); // Using abs to avoid floating point precision issues
    }

    TEST_CASE("Testing move towards a point") {
        Point p3(3, 3);
        Point p4(4, 4);
        Point p5 = p3.moveTowards(p4,p3, 1.0);
        double actual_distance = p5.distance(p4);
        CHECK(actual_distance <= 1.0);
    }

    
}


TEST_SUITE("Character") {
    Point p1(2, 4);
    Character char1("Character1", p1);
    
    TEST_CASE("Testing hit points and isAlive") {
        CHECK(char1.isAlive() == true);
        char1.hit(10);
        CHECK(char1.isAlive() == false);
    }

    TEST_CASE("Testing name and location") {
        CHECK(char1.getName() == "Character1");
        //CHECK(char1.getLocation().getX() == 2);
        //CHECK(char1.getLocation().getY() == 4);
    }

    TEST_CASE("Testing hit points and isAlive") {
        CHECK(char1.isAlive() == true);
        char1.hit(10);
        CHECK(char1.isAlive() == false);
    }

    TEST_CASE("Testing copy constructor") {
        Character char2(char1);
        CHECK(char2.getName() == "Character1");
        //CHECK(char2.getLocation().getX() == 2);
        //CHECK(char2.getLocation().getY() == 4);
        CHECK(char2.isAlive() == false);
    }

    TEST_CASE("Testing copy assignment operator") {
        Character char3 = char1;
        CHECK(char3.getName() == "Character1");
    }
}


TEST_SUITE("Cowboy") {

    TEST_CASE("Cowboy: Shoot and reload") {
    Cowboy cowboy("John", Point(0, 0));

    // Test the initial state
    CHECK(cowboy.hasBullets() == false);

    // Test reloading bullets
    cowboy.reload();
    CHECK(cowboy.hasBullets() == true);

    // Test shooting at an enemy
    Character enemy("Enemy", Point(1, 1));
    cowboy.shoot(&enemy);
    CHECK(enemy.isAlive() == false);

    // Test shooting when there are no bullets
    cowboy.reload();
    cowboy.shoot(&enemy);
    CHECK(enemy.isAlive() == false);  // The enemy should still be dead

    // Test multiple shots
    cowboy.reload();
    cowboy.shoot(&enemy);
    CHECK(enemy.isAlive() == false);  // The enemy should still be dead
    cowboy.shoot(&enemy);
    CHECK(enemy.isAlive() == false);  // The enemy should still be dead

    // Test reloading after shooting all bullets
    cowboy.reload();
    CHECK(cowboy.hasBullets() == true);
}

}

TEST_SUITE("Ninja") {

    TEST_CASE("Ninja: Move and slash") {
    Ninja ninja("Hanzo", Point(0, 0));

    // Test the initial state
    CHECK(ninja.print() == "Name: Hanzo, Location: (0, 0)");

    // Test moving the ninja
    Character enemy("Enemy", Point(1, 1));
    ninja.move(&enemy);
    CHECK(ninja.print() == "Name: Hanzo, Location: (1, 1)");

    // Test slashing an enemy
    ninja.slash(&enemy);
    CHECK_FALSE(enemy.isAlive());

    // Test moving and slashing
    Character anotherEnemy("Another Enemy", Point(2, 2));
    ninja.move(&anotherEnemy);
    CHECK(ninja.print() == "Name: Hanzo, Location: (2, 2)");
    ninja.slash(&anotherEnemy);
    CHECK_FALSE(anotherEnemy.isAlive());
}

TEST_CASE("Ninja: Print") {
    Ninja ninja("Hattori", Point(3, 3));

    // Test print function
    CHECK(ninja.print() == "Name: Hattori, Location: (3, 3)");
}

        
    }