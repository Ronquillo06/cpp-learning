#include "Cat.hpp"
#include <iostream>

using namespace std;


Cat::Cat(std::string name, int age, int nLives) 
    : Animal(name, age), lives(nLives) {}

void Cat::display(){
    cout << "Cat\n\n";
    cout << getName() << "\n\n";
    cout << "Lives: " << lives << "\n\n";
    cout << "Age: " << getAge() << "\n\n";
}