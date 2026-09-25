#include <iostream>

using namespace std;

int main() {

    int num[10] = {12, 8, -5, -10, -3, 7, 15, 20, -2, 30};

    bool foundNegative = false;
    int firstPositive = -1;
    int index = -1;

    for (int i = 0; i < 10; i++) {
        if (!foundNegative) {
            if (num[i] < 0) {
                foundNegative = true;
            }
        } else {
            if(num[i] > 0) {
                firstPositive = num[i];
                index = i;
                break;
            }
            
        }
    }

    if (index != -1) {
        cout << "First positive after a negative: " << firstPositive << "\n";
        cout << "Index: " << index << "\n";
    } else {
        cout << "No positive number found after a negative\n";
    }

    return 0;
}