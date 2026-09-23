#include <iostream>
#include "Weapon.hpp"
#include "Potion.hpp"
#include "Inventory.hpp"

using namespace std;

int main(){
    Inventory myInventory;

    Weapon sword("Iron Sword", 250, 35);
    Weapon bow("Longbow", 400, 50);
    Potion smallPotion("Small Potion", 50, 20);
    Potion healthElixir("Health Elixir", 150, 100);

    
    myInventory.addItem(&sword);
    myInventory.addItem(&bow);
    myInventory.addItem(&smallPotion);
    myInventory.addItem(&healthElixir);

    myInventory.displayInventory();
    return 0;
}