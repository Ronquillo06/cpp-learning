#include <iostream>
#include "Warrior.hpp"
#include "Mage.hpp"

using namespace std;

int main() {

    Warrior warrior("Henry", 100);
    Mage mage("Merlin", 80);

    cout << "===== RPG CHARACTER SYSTEM =====\n";

    warrior.displayInfo();
    cout << "\n";
    mage.displayInfo();
    cout << "\n";

    cout << "===== ABILITIES =====\n";

    warrior.useAbility();
    mage.useAbility();

    Character* party[2];
    party[0] = &warrior;
    party[1] = &mage;

    cout << "\n===== PARTY ABILITIES (LOOP) =====\n";

    for (int i = 0; i < 2; i++) {
        party[i]->useAbility(); 
    }
    return 0;
}