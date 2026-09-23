#include "MenuItem.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

MenuItem::MenuItem(string nme, double prce) : name(nme), price(prce) {}

void MenuItem::display(){
  cout << name << " - $" << fixed << setprecision(2) << price << "\n"; 
}