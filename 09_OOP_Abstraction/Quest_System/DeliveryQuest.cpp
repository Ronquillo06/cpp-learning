#include <iostream>
#include "DeliveryQuest.hpp"

using namespace std;

DeliveryQuest::DeliveryQuest(std::string name, int reward, std::string nDestination) : Quest(name, reward), destination(nDestination) {}

void DeliveryQuest::completeQuest() {
    cout << "\n";
    cout << "Quest completed!\n";
    cout << "Package delivered to " << destination << "\n";
    cout << "Reward: " << getReward() << "gold\n";
    cout << "-------------------\n";
}
void DeliveryQuest::displayQuest() {
    cout << "\n";
    cout << "Quest: " << getName() << "\n";
    cout << "Destination: " << destination << "\n";
}