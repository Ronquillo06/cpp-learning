#ifndef MEXICAN_RESTAURANT_HPP
#define MEXICAN_RESTAURANT_HPP

#include "Restaurant.hpp"
#include <string>

class MexicanRestaurant : virtual public Restaurant {
  private:
    int spiceLevel;
  public:
    using Restaurant::Restaurant;
    MexicanRestaurant(string nme, string addr, int spceLevel);
    void describeCuisine();
};

#endif