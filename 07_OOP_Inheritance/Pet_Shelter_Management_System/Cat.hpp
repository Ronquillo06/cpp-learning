#include "Animal.hpp"
#pragma once
#include <string>

class Cat : public Animal{
    private:
        int lives;
    public:
        Cat(std::string name, int age, int nLives);
        void display();

};