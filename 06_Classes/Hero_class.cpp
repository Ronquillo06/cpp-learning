// ==========================================
// SIMULATING: Hero.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Hero
{
    public:
    string name;
    int health;
    int shield;

    void spawnHero(string heroName);
    void takeDamage(int damage);
    void drinkPotion();
    void recoverShield();
    void showStats();

};
// ==========================================
// SIMULATING: .cpp
// ==========================================
//#include "Hero.hpp"

void Hero::spawnHero(string heroName)
{
    name = heroName;
    health = 100;
    shield = 50;
}
void Hero::takeDamage(int damage)
{
    shield -= damage;
    if (shield < 0)
    {
        health += shield;
        shield = 0;
        if (health < 0)
        {
            health = 0;
        }
    }

}
void Hero::drinkPotion()
{
    health += 25;
    if (health > 100)
    {
        health = 100;
    }
}
void Hero::recoverShield()
{
    shield += 10;
    if (shield > 50)
    {
        shield = 50;
    }

}
void Hero::showStats()
{
    cout << "Player Name: " << name << " | " << health << " | " << shield << "\n"; 
}
// ==========================================
// SIMULATING: main.cpp
// ==========================================


int main()
{

    Hero player1;

    player1.spawnHero("TungTung");
    player1.showStats();

    player1.takeDamage(60);
    player1.showStats();

    player1.takeDamage(200);
    player1.showStats();

    player1.drinkPotion();
    player1.drinkPotion();
    player1.drinkPotion();
    player1.drinkPotion();
    player1.drinkPotion();
    player1.showStats();

    player1.takeDamage(60);
    player1.showStats();
    
    player1.drinkPotion();
    player1.recoverShield();
    player1.recoverShield();
    player1.recoverShield();
    player1.showStats();

    player1.takeDamage(20);
    player1.showStats();

    player1.takeDamage(20);
    player1.showStats();




    return 0;
}