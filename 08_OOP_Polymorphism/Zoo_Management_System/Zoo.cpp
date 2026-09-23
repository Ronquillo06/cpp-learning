#include "Zoo.hpp"
#include <iostream>

using namespace std;

void Zoo::addAnimal(Animal* animal) {
    animals.push_back(animal);
}
void Zoo::displayZoo() {
    for (Animal* animal : animals) {
        animal->display();
    } 
}
void Zoo::feedEveryone(const int& food) {
    for (int i = 0; i < animals.size(); i++) {
        animals[i]->feed(food);
    }
}
void Zoo::exerciseEveryone(const int& amount) {
    for (int i = 0; i < animals.size(); i++) {
        animals[i]->exercise(amount);
    }
}
void Zoo::feedAnimal(Animal* animal, const int& food) {
    if (animal != nullptr) {
        animal->feed(food);
    }
}
void Zoo::displayHealthyAnimals() {
    std::cout << "=== HEALTHY ANIMALS (HEALTH >= 80) ===\n";
    for (Animal* animal : animals) {
        if (animal -> getHealth() >= 80) {
            animal->display();
        }
    }
}