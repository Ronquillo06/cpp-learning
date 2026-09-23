#include "Animal.hpp"
#pragma once
#include <string>

class Dog : public Animal{
    private:
        std::string breed;
    public:
        Dog(std::string name, int age, std::string nBreed);
        void display();
};