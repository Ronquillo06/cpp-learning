#include "Character.hpp"
#include <iostream>

using namespace std;

Character::Character(string nName, int nLevel) 
    : name(nName), level(nLevel) {}

string Character::getName(){
    return name;
}
int Character::getLevel(){
    return level;
}
void Character::display(){
    cout << name << "\n";
    cout << "Level: " << level << "\n";
}