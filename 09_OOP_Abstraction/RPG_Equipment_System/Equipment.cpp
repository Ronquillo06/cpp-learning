#include "Equipment.hpp"
#include <iostream>

using namespace std;

Equipment::Equipment(string nName, int nValue)
        : name(nName), value(nValue) {}

string Equipment::getName() {
    return name; 
}
int Equipment::getValue() {
    return value;
}