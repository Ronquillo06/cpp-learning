#pragma once
#include <string>

class Character {
    private:
        std::string name;
        int health;
    public:
        Character(std::string nName, int nHealth);
        void displayInfo();
        virtual void useAbility() = 0;
        std::string getName();
        virtual ~Character() {}
};