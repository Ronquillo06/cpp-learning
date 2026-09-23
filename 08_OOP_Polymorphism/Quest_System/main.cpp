#include <iostream>
#include "Character.hpp"
#include "Warrior.hpp"
#include "Mage.hpp"
#include "Quest.hpp"
#include "QuestBoard.hpp"

int main() {

    Warrior arthur("Arthur", 100, 200, 80);
    Warrior lancelot("Lancelot", 90, 300, 75);

    Mage merlin("Merlin", 80, 500, 95);
    Mage gandalf("Gandalf", 70, 600, 100);

    Quest dragonHunt("Dragon Hunt", 500, 25);
    Quest treasureHunt("Treasure Hunt", 300, 10);
    Quest goblinRaid("Goblin Raid", 200, 15);

    QuestBoard board;

    board.registerCharacter(&arthur);
    board.registerCharacter(&lancelot);
    board.registerCharacter(&merlin);
    board.registerCharacter(&gandalf);

    board.addQuest(&dragonHunt);
    board.addQuest(&treasureHunt);
    board.addQuest(&goblinRaid);

    board.displayCharacters();
    board.displayQuests();

    std::cout << "\n=== ASSIGNING QUESTS ===\n";
    board.assignQuest(&arthur, &dragonHunt);
    board.assignQuest(&merlin, &treasureHunt);

    std::cout << "\n=== COMPLETING QUESTS ===\n";
    board.completeQuest(&arthur, &dragonHunt);
    board.completeQuest(&merlin, &treasureHunt);


    std::cout << "\n=== HEALING PARTY ===\n";
    board.healEveryone(20);

    return 0;
}