#pragma once
#include <vector>
#include "Player.hpp"

class Guild {
    private:
        std::vector<Player*> players;
    public: 
        void recruit(Player* player);
        void displayGuild();
        void rewardEveryone(const int& coins);
        void fineEveryone(const int& coins);
        void displayRichPlayers();
        void rewardMember(Player* player, const int& coins);
};