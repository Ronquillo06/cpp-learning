#include "MexicanRestaurant.hpp"
#include <iostream>

using namespace std;

MexicanRestaurant::MexicanRestaurant(string nme, string addr, int spceLevel) : Restaurant(nme, addr), spiceLevel(spceLevel) {}

void MexicanRestaurant::describeCuisine(){
  cout << "Authentic Mexican cuisine with spice level " << spiceLevel << " out of 5\n";
}