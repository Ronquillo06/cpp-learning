#include "Restaurant.hpp"
#include <iostream>

using namespace std;

Restaurant::Restaurant(string n, string addr)
  : name(n), address(addr) {}


void Restaurant::displayInfo(){
  cout << "Restaurant: " << name << "\n";
  cout << "Address: " << address << "\n";
}

void Restaurant::describeCuisine(){
  cout << "This restaurant serves various types of cuisines.";
}

void Restaurant::addMenuItem(MenuItem item){
  menu.push_back(item);
}
void Restaurant::displayMenu(){
  cout << name << "'s Menu:\n";
  for(int i = 0; i < menu.size(); i++){
    menu[i].display();
  } 
}