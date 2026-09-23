#include <iostream>

using namespace std;

int main() {

    int num[8] = {42, 17, 89, 23, 61, 89, 5, 34};

    int maxIndex = 0;
    int maxNum = num[0];

    for (int i = 0; i < 8; i++) {
        if (num[i] > maxNum) {
            maxNum = num[i];
            maxIndex = i;
        }
    }

    cout << "Maximum value: " << maxNum << "\n";
    cout << "First index: " << maxIndex << "\n";

    return 0;
}