#include "Character.hpp"
#include <vector>
#pragma once

using namespace std;

class Party {
    private:
        vector<Character*> characters;
    public:
        void addMember(Character* character);
        void displayParty();
};