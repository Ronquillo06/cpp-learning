#include "Dog.hpp"
#include <iostream>

using namespace std;

Dog::Dog(std::string name, int age, std::string nBreed) 
    : Animal(name, age), breed(nBreed) {} 

void Dog::display(){
    cout << "Dog\n\n";
    cout << getName() << "\n\n";
    cout << "Breed: " << breed << "\n\n";
    cout << "Age: " << getAge() << "\n\n";

}