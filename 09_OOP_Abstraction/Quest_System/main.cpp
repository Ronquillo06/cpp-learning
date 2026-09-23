#include "CombatQuest.hpp"
#include "DeliveryQuest.hpp"
#include "Exploration.hpp"
#include <iostream>

using namespace std;


int main() {

    CombatQuest combat("Defeat 10 Goblins", 150, 10);
    DeliveryQuest delivery("Deliver Health Potion", 75, "Blacksmith");
    ExplorationQuest exploration("Discover the Hidden Cave", 200, "Dark Cave");

    Quest* quests[3];

    quests[0] = &combat;
    quests[1] = &delivery;
    quests[2] = &exploration;

    for (int i = 0; i < 3; i++) {
        quests[i]->displayQuest();
        quests[i]->completeQuest();
    }


    return 0;
}