#include "Inventory.hpp"
#include <iostream>

using namespace std;

Inventory::Inventory() {}

void Inventory::addItem(Item* item){
    items.push_back(item);
}
void Inventory::displayInventory(){
    cout << "===== INVENTORY =====\n\n";
    for (int i = 0; i < items.size(); i++){
        items[i]->display();
        cout << "\n----------------\n\n";
    }
}