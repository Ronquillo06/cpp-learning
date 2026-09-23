#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Shelter.hpp"

int main() {

    Shelter shelter;
    
    Dog buddy("Buddy", 4, "Golden Retriever");
    Dog rocky("Rocky", 3, "Husky");

    Cat luna("Luna", 2, 9);
    Cat milo("Milo", 7, 5);


    shelter.addAnimal(&buddy);
    shelter.addAnimal(&rocky);
    shelter.addAnimal(&luna);
    shelter.addAnimal(&milo);

    shelter.displayAnimals();


    return 0;
}