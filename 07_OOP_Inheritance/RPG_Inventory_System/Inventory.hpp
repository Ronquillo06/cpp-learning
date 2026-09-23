#include <vector>
#include "Item.hpp"

using namespace std;

class Inventory {
    private:
        vector<Item*> items;
    public:
        Inventory();
        void addItem(Item* item);
        void displayInventory();
        
};