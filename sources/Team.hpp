
#include <vector>
#include "Point.hpp"
#include "Ninja.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
namespace ariel
{
    class Team
    {
        
        private:
        Character* leader;
        vector<Character*> war{10};
       
       public:
        Team(Character* character);
        ~Team();
        void add(Character* warrior);
        void attack(Team* enemies);
        int stillAlive();
        void print();
    };
}