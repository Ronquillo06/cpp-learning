#include "Warrior.hpp"
#include "Mage.hpp"
#include "Party.hpp"
#include <iostream>

using namespace std;

int main(){

    Party party;

    Warrior warrior("Arthur", 10, 75);
    Mage mage ("Merlin", 12, 150);

    party.addMember(&warrior);
    party.addMember(&mage);

    party.displayParty();

    return 0;
}