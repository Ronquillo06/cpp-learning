#include "BattleSystem.hpp"


void BattleSystem::fight(Character* attacker, Character* defender, int amount) {
    if (!attacker || !defender) return;

    attacker->attack();
    defender->takeDamage(amount);
}