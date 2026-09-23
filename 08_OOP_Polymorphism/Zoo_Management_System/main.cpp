#include "Animal.hpp"
#include "Lion.hpp"
#include "Elephant.hpp"
#include "Zoo.hpp"
#include <iostream>

using namespace std;

int main() {

    Zoo zoo;

    Lion simba("Simba", 5, 75, 90);
    Lion mufasa("Mufasa", 10, 85, 95);
    Elephant dumbo("Dumbo", 3, 60, 120);
    Elephant horton("Horton", 8, 90, 150);

    zoo.addAnimal(&simba);
    zoo.addAnimal(&mufasa);
    zoo.addAnimal(&dumbo);
    zoo.addAnimal(&horton);

    cout << "=== INITIAL ZOO ROSTER ===\n";
    zoo.displayZoo();

    cout << "\n=== EXERCISING ALL ANIMALS (-20 HEALTH) ===\n";
    zoo.exerciseEveryone(20);
    zoo.displayZoo();

    cout << "\n=== FEEDING ALL ANIMALS (+15 HEALTH) ===\n";
    zoo.feedEveryone(15);
    zoo.displayZoo();

    cout << "\n=== FEEDING DUMBO DIRECTLY (+30 HEALTH) ===\n";
    zoo.feedAnimal(&dumbo, 30);

    cout << "\n";
    zoo.displayHealthyAnimals();

    return 0;
}