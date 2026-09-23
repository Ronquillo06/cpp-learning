#include "Player.hpp"
#include "Swordsman.hpp"
#include "Healer.hpp"
#include "Guild.hpp"
#include <iostream>

using namespace std;

int main() {

    Guild  guild;

    Swordsman arthur("Arthur", 800, 50);
    Swordsman lancelot("Lancelot", 1200, 45);
    Healer mercy("Mercy", 500, 30);
    Healer luna("Luna", 1500, 40);

    guild.recruit(&arthur);
    guild.recruit(&lancelot);
    guild.recruit(&mercy);
    guild.recruit(&luna);

    cout << "=== INITIAL GUILD ROSTER ===\n";
    guild.displayGuild();
    
    cout << "\n=== FINING EVERYONE 200 COINS ===\n";
    guild.rewardEveryone(200);

    cout << "\n=== FINING EVERYONE 50 COINS ===\n";
    guild.fineEveryone(50);

    cout << "\n=== REWARDING ARTHUR DIRECTLY (500 COINS) ===\n";
    guild.rewardMember(&arthur, 500);

    cout << "\n=== RICH PLAYERS (>= 1000 COINS) ===\n";
    guild.displayRichPlayers();

    return 0;
}