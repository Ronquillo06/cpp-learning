#include <iostream>
#include "Weapon.hpp"
#include "Potion.hpp"
#include "Equipment.hpp"
#include "Usable.hpp"

using namespace std;

int main() {

    Weapon sword("Sword", 90, 40);
    Potion healthPotion("Health Potion", 10, 20);

    Equipment* inventory[2];

    inventory[0] = &sword;
    inventory[1] = &healthPotion;

    for(int i = 0; i < 2; i++) {
        inventory[i]->displayInfo();
    }

    Usable* usableItems[2];

    usableItems[0] = &sword;
    usableItems[1] = &healthPotion;

    for(int i = 0; i < 2; i++) {
        usableItems[i] -> use();
    }

    return 0;
}