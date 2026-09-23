#include "Quest.hpp"
#include <iostream>

using namespace std;

Quest::Quest(std::string nName, int nReward) : name(nName), reward(nReward) {}


string Quest::getName () {
    return name;
}
int Quest::getReward() {
    return reward;
}
