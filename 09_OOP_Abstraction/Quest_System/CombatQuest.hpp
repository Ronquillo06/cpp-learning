#pragma once
#include "Quest.hpp"

class CombatQuest : public Quest {
    private:
        int numberOfEnemies;
    public:
        CombatQuest(std::string name, int reward, int enemies);
        void completeQuest() override;
        void displayQuest() override;
};