#include "Quest.hpp"
#include <iostream>

using namespace std;

Quest::Quest(std::string nTitle, int nReward, int nDamage)
    : title(nTitle), reward(nReward), damage(nDamage) {}

string Quest::getTitle() {
    return title;
}
int Quest::getReward() {
    return reward;
}
int Quest::getDamage() {
    return damage;
}
void Quest::display() {
    cout << title << "\n";
    cout << "Reward: " << reward << " gold\n";
    cout << "Damage: " << damage << " health\n";
}