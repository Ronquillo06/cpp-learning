#pragma once
#include "Quest.hpp"

class DeliveryQuest : public Quest {
    private: 
        std::string destination;
    public:
        DeliveryQuest(std::string name, int reward, std::string nDestination);
        void completeQuest() override;
        void displayQuest() override;
};