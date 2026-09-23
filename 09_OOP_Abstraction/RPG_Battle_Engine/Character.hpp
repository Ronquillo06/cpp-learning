#pragma once
#include <string>


class Character {
    protected:
        int health;
    private:
        std::string name;
    public:
        Character(std::string nName, int nHealth);
        std::string getName();
        int getHealth();
        virtual void attack() = 0;
        virtual void takeDamage(int amount) = 0;

};