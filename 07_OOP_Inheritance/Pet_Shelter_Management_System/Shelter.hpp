#pragma once
#include "Animal.hpp"
#include <vector>

class Shelter {
    private:
        std::vector<Animal*> animals;
    public:
        void addAnimal(Animal* animal);
        void displayAnimals();
};