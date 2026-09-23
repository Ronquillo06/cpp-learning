#include "Character.hpp"
#include "Warrior.hpp"
#include "Healer.hpp"
#include "QuestBoard.hpp"
#include <iostream>

using namespace std;

int main() {

    QuestBoard board;

    Warrior arthur("Arthur", 100, 500, 80);
    Warrior leon("Leon", 90, 300, 75);

    Healer mercy("Mercy", 80, 700, 90);
    Healer luna("Luna", 85, 600, 85);

    cout << "=== REGISTERING CHARACTERS ===\n";

    board.registerCharacter(&arthur);
    board.registerCharacter(&leon);
    board.registerCharacter(&mercy);
    board.registerCharacter(&luna);

    board.displayCharacters();

    cout << "\n=== REWARD ARTHUR +200 ===\n";
    board.rewardCharacter(&arthur, 200);

    cout << "\n=== DAMAGE LEON -30 ===\n";
    board.damageCharacter(&leon, 30);

    cout << "\n=== HEAL EVERYONE +10 ===\n";
    board.healEveryone(10);

    cout << "\n=== REMOVE LEON ===\n";
    board.removeCharacter(&leon);

    cout << "\n=== FINAL ROSTER ===\n";
    board.displayCharacters();

    return 0;
}