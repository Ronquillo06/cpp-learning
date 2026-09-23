#pragma once
#include <string>

class Quest {
    private:
        std::string name;
        int reward;
    public:
        Quest(std::string nName, int nReward);
        std::string getName();
        int getReward();

        virtual void completeQuest() = 0;
        virtual void displayQuest() = 0;

        virtual ~Quest() {}
};
