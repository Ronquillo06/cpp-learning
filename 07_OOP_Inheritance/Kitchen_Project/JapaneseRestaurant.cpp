#include "JapaneseRestaurant.hpp"
#include <iostream>
using namespace std;

JapaneseRestaurant::JapaneseRestaurant(string name, string addr, bool tatamiAvailable) : Restaurant(name, addr), hasTatami(tatamiAvailable) {}

void JapaneseRestaurant::describeCuisine() {
  if (hasTatami) {
    cout << "Traditional Japanese cuisine with tatami seating available\n";
  } else {
    cout << "Traditional Japanese cuisine\n";
  }
}