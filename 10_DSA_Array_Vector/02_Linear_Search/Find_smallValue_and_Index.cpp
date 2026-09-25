#include <iostream>

using namespace std;

int main() {

    int num[8] = {42, 17, 89, 23, 61, 5, 34, 9};

    int minVal = num[0];
    int minIndex = 0;

    for (int i = 0; i < 8; i++) {
        if (num[i] < minVal) {
            minVal = num[i];
            minIndex = i;
        }
    }

    cout << "Smallest value: " << minVal << "\n";
    cout << "Index: " << minIndex << "\n";

    return 0;
}