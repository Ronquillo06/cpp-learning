#include "CombatQuest.hpp"
#include <iostream>

using namespace std;

CombatQuest::CombatQuest(std::string name, int reward, int enemies) : Quest(name, reward), numberOfEnemies(enemies) {}

void CombatQuest::completeQuest() {
    cout << "\n";
    cout << "Quest completed!\n";
    cout << "You defeated " << numberOfEnemies << " enemies\n";
    cout << "Reward: " << getReward() << " gold\n";
    cout << "-------------------\n";
}   
void CombatQuest::displayQuest() {
    cout << "Quest: " << getName() << " | Reward: " << getReward() << " gold | Enemies to defeat: " << numberOfEnemies << "\n";
}