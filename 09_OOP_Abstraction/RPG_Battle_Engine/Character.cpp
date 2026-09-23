#include "Character.hpp"
#include <iostream>

using namespace std;

Character::Character(string nName, int nHealth) : name(nName), health(nHealth) {}


string Character::getName() {
    return name;
}
int Character::getHealth() {
    return health;
}