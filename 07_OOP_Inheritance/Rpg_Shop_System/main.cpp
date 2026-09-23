#include "Character.hpp"
#include "Knight.hpp"
#include "Archer.hpp"
#include "Shop.hpp"
#include <iostream>

using namespace std;

int main() {

    Shop shop;

    Knight arthur("Arthur", 500, 80);
    Knight leon("Leon", 750, 82);

    Archer robin("Robin", 600, 77);
    Archer luna("Luna", 900, 70);

    cout << "===== RPG SHOP =====\n\n";

    shop.rewardAllCharacter(200);
    //arthur.earnGold(200);
    //leon.earnGold(200);
    //robin.earnGold(200);
    //luna.earnGold(200);

    cout << "----------------\n";

    shop.taxAllCharacter(150);
    //arthur.spendGold(150);
    //leon.spendGold(150);
    //robin.spendGold(150);
    //luna.spendGold(150);

    shop.addCharacter(&arthur);
    shop.addCharacter(&leon);
    shop.addCharacter(&robin);
    shop.addCharacter(&luna);

    cout << "----------------\n";

    shop.displayCharacters();



    return 0;
}