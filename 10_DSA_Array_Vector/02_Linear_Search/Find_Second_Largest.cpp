#include <iostream>

using namespace std;

int main() {

    int num[8] = {42, 17, 89, 23, 61, 5, 34, 72};

    int maxVal= num[0];
    int secVal = num[0];

    for (int i = 0; i < 8; i++) {
        if (num[i] > maxVal) {
            secVal = maxVal;
            maxVal = num[i];
        } else if (num[i] > secVal && num[i] != maxVal) {
            secVal = num[i];
        }
    }

    cout << "Largest: " << maxVal << "\n";
    cout << "Second largest: " << secVal << "\n";


    return 0;
}