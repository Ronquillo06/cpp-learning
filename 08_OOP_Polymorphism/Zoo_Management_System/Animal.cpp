#include "Animal.hpp"
#include <iostream>

using namespace std;

Animal::Animal(std::string nName, int nAge, int nHealth)
        : name(nName), age(nAge), health(nHealth) {}

string Animal::getName() {
    return name;
}
int Animal::getAge() {
    return age;
}
void Animal::display() {
    cout << "Name: " << name << " | Age: " << age << " | Health: " << health << "\n";
}
int Animal::getHealth() {
    return health;
}
void Animal::feed(const int& food) {
    if (food > 0) {
        health += food;
        if (health > 100) {
            health = 100;
        }
    }
}
void Animal::exercise(const int& amount) {
    if (amount > 0) {
        health -= amount;
        if (health < 0) {
            health = 0;
        }
    }
}