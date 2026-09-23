// ==========================================
// SIMULATING: Character.hpp
// ==========================================

#include <iostream>
#include <string>

using namespace std;

class Character
{

    string name;
    int hp;
    int shield;
    int attackPower;

    public:
    void setCharacter(string characterName, int initialHp, int initialshield, int atk);
    void attack();
    void takeDamage(int damage);
    void heal();
    void showStatus();
    public:


};

// ==========================================
// SIMULATING: Character.cpp
// ==========================================
// #include ".hpp"

void Character::setCharacter(string characterName, int initialHp, int initialshield, int atk)
{
    name = characterName;
    attackPower = atk;

    if (initialHp > 100)
    {
        hp = 100;
    } 
    else if (initialHp < 0)
    {
        hp = 0;
    }
    else
    {
        hp = initialHp;
    }

    if (initialshield > 50)
    {
        shield = 50;
    }
    else if (initialshield < 0)
    {
        shield = 0;
    }
    else
    {
        shield = initialshield;
    }
}
void Character::attack()
{
    cout << name << " attacks and deals " << attackPower << " damage!\n";
}
void Character::takeDamage(int damage)
{
    cout << "\nEnemy attacks...\n";
    shield -= damage;
    if (shield < 0)
    {
        hp -= damage;
        shield = 0;
        if (hp < 0)
        {
            hp = 0;
            cout << name << " has been defeated!\n";
        }
    }
}
void Character::heal()
{
    if (hp > 0) {
        hp += 20;
        if (hp > 100) 
        {
            shield += 10;
            hp = 100; 
        } 
        else 
        {
        cout << name << " is down and cannot heal!\n";
        }
    }
}
void Character::showStatus() {
    cout << "Name: " << name << " | HP: " << hp << " | Shield: " << shield << " | Attack: " << attackPower << "\n";
}
// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "Character.hpp"

int main()
{

    Character myHero;
    
    
    myHero.setCharacter("Warrior", 100, 50, 25);
    myHero.showStatus();

    
    myHero.takeDamage(25);
    myHero.showStatus(); 

    
    myHero.takeDamage(25);
    myHero.takeDamage(25);
    myHero.showStatus(); 

    
    myHero.heal();
    myHero.showStatus(); 

    myHero.heal();
    myHero.heal();
    myHero.showStatus(); 


    
    cout << "\n";
    myHero.attack();


    return 0;
}