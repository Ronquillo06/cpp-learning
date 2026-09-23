#include "Item.hpp"
#include <string>
#include <iostream>

using namespace std;


Item::Item(string nname, int vvalue) : name(nname), value(vvalue) {}

string Item::getName(){
    return name;
}
int Item::getValue(){
    return value;
}
void Item::display(){
    cout << name << "\n";
    cout << "Value: " << value << "\n";
}