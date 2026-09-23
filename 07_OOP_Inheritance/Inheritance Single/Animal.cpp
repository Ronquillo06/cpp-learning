#include <iostream>
#include "Animal.hpp"
using namespace std;

void Animal::setName(string newName){
    name = newName;
}
void Animal::eat(){
    cout << name << " is eating.\n";
}
void Animal::sleep(){
    cout << name << " is sleeping.\n";
}