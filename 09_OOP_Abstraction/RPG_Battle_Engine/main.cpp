#include <iostream>
#include <vector>
#include "Warrior.hpp"
#include "Mage.hpp"
#include "Archer.hpp"
#include "BattleSystem.hpp"

int main() {

    std::vector<Character*> party;
    party.push_back(new Warrior("Henry", 100));
    party.push_back(new Mage("Merlin", 80));
    party.push_back(new Archer("Robin", 90));

    std::cout << "===== PARTY =====\n\n";
    for (Character* c : party) {
        std::cout << c->getName() << "\n";
        std::cout << "Health: " << c->getHealth() << "\n\n";
    }

    std::cout << "===== PARTY ATTACKS =====\n";
    for (Character* c : party) {
        c->attack();
    }
    std::cout << "\n";

    std::cout << "===== RPG BATTLE =====\n";
    BattleSystem battle;

    
    battle.fight(party[0], party[1], 20); 
    battle.fight(party[1], party[0], 30); 
    battle.fight(party[2], party[0], 15);

    for (Character* c : party) {
        delete c;
    }

    return 0;
}