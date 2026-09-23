#include "Guild.hpp"
#include <iostream>

using namespace std;

void Guild::recruit(Player* player) {
    players.push_back(player);
}
void Guild::displayGuild() {
    for (Player* player : players) {
        player->display();
    }
}
void Guild::rewardEveryone(const int& coins) {
    for (int i = 0; i < players.size(); i++) {
        players[i]->earnCoins(coins);
    }
}
void Guild::fineEveryone(const int& coins) {
    for (Player* player : players) {
        player->spendCoins(coins);
    }
}
void Guild::displayRichPlayers() {
    for (Player* player : players) {
        if (player->getCoins() >= 1000) {
            player->display();
        }
    }
}
void Guild::rewardMember(Player* player, const int& coins) {
    if (player != nullptr) {
        player->earnCoins(coins);
    }
}