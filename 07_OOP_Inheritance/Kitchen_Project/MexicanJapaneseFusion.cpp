#include "MexicanJapaneseFusion.hpp"
#include <iostream>

using namespace std;

MexicanJapaneseFusion::MexicanJapaneseFusion(string nme, string addre, int sceLevel, bool tami) 
: Restaurant(nme, addre), 
  MexicanRestaurant(nme, addre, sceLevel), 
  JapaneseRestaurant(nme, addre, tami) {}

void MexicanJapaneseFusion::describeCuisine(){
  cout << "A unique fusion of Mexican and Japanese cuisines\n";
}

void MexicanJapaneseFusion::displaySpecialty(){
  cout << "Our specialties combine both cuisines - try our Sushi Tacos and Wasabi Guacamole!\n";
}