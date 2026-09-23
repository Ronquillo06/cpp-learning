#include <iostream>
#include "Character.hpp"
#include "Warrior.hpp"
#include "Healer.hpp"
#include "Party.hpp"

using namespace std;

int main() {

    Party party;

    Warrior arthur("Arthur", 100, 500, 80);
    Warrior leon("Leon", 90, 300, 75);

    Healer mercy("Mercy", 80, 700, 90);
    Healer luna("Luna", 85, 600, 85);

    party.recruit(&arthur);
    party.recruit(&leon);
    party.recruit(&mercy);
    party.recruit(&luna);

    cout << "=== PARTY ===\n";
    party.displayParty();

    cout << "\n=== HEAL EVERYONE +10 ===\n";
    party.healEveryone(10);

    cout << "\n=== DAMAGE ARTHUR -30 ===\n";
    party.damageCharacter(&arthur, 30);

    cout << "\n=== REWARD MERCY +200 GOLD ===\n";
    party.rewardCharacter(&mercy, 200);

    cout << "\n=== FINAL PARTY ===\n";
    party.displayParty();

    return 0;
}