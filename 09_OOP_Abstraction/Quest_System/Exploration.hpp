#pragma once
#include "Quest.hpp"

class ExplorationQuest : public Quest {
    private:
        std::string location;
    public:
        ExplorationQuest(std::string name, int reward, std::string nLocation);
        void completeQuest() override;
        void displayQuest() override;
};
