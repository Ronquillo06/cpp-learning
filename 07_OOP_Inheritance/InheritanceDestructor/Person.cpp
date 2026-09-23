#include "Person.hpp"
#include <iostream>

using namespace std;

Person::Person(){
    cout << "Person have been created!\n";
}
Person::~Person(){
    cout << "Person destroyed.\n";
}