#include "Party.hpp"
#include <iostream>

using namespace std;

void Party::addMember(Character* character){
    characters.push_back(character);
}
void Party::displayParty(){
    cout << "\n===== PARTY =====\n\n";
    //practice this type of loop
    for(Character* character : characters) {
        character->display();
        cout << "\n----------------\n\n";
    }
    /*
    for (int i = 0; i < characters.size(); i++){
        characters[i]->display();
    }
        for (size_t int i = 0; i < characters.size(); i++){
        characters[i]->display();
    */
}