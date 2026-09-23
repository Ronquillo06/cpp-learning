#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"

int main() {

    Dog dog;
    dog.setName("Buddy");
    dog.eat();
    dog.sleep();
    dog.bark();

    return 0;
}