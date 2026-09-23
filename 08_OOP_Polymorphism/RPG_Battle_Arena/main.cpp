#include <iostream>
#include "Character.hpp"
#include "Knight.hpp"
#include "Mage.hpp"
#include "Arena.hpp"

using namespace std;

int main() {
    
    Knight arthur("Arthur", 100, 25, 15);
    Knight lancelot("Lancelot", 90, 20, 20);
    Mage merlin("Merlin", 70, 15, 30);
    Mage gandalf("Gandalf", 80, 18, 25);

    
    Arena arena;
    arena.addCharacter(&arthur);
    arena.addCharacter(&lancelot);
    arena.addCharacter(&merlin);
    arena.addCharacter(&gandalf);

    
    arena.displayArena();

    
    arena.battle(&arthur, &merlin);
    arena.battle(&merlin, &arthur);
    arena.battle(&gandalf, &lancelot);

    
    arena.healEveryone(30);

    
    std::cout << "\n";
    arena.displayAliveCharacters();

    return 0;
}