#include "Shelter.hpp"
#include <iostream>

using namespace std;

void Shelter::addAnimal(Animal* animal){
    animals.push_back(animal);
}
void Shelter::displayAnimals(){
    cout << "===== SHELTER =====\n";
    for (Animal* animal : animals) {
        animal->display();
        cout << "----------------\n";
    }
}