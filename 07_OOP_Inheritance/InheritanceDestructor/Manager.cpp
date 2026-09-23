#include <iostream>
#include "Manager.hpp"

using namespace std;

Manager::Manager(){
    cout << "You manage this department\n";
}
Manager::~Manager(){
    cout << "You have been kicked\n";
}