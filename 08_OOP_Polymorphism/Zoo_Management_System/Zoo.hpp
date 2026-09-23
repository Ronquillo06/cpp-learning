#pragma once
#include <vector>
#include "Animal.hpp"

class Zoo {
    private:
        std::vector<Animal*> animals;
    public:
        void addAnimal(Animal* animal);
        void displayZoo();
        void feedEveryone(const int& food);
        void exerciseEveryone(const int& amount);
        void feedAnimal(Animal* animal, const int& food);
        void displayHealthyAnimals();
};