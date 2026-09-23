#include "Exploration.hpp"
#include <iostream>

using namespace std;

ExplorationQuest::ExplorationQuest(string name, int reward, std::string nLocation)
        : Quest(name, reward), location(nLocation) {}

void ExplorationQuest::completeQuest() {
    cout << "\n";
    cout << "Quest completed!\n";
    cout << "You discovered " << location << "\n";
    cout << "Reward: " << getReward() << "\n";
    cout << "-------------------\n";
}
void ExplorationQuest::displayQuest() {
    cout << "\n";
    cout << "Quest: " << getName() << "\n";
    cout << "Location: " << location << "\n";
}