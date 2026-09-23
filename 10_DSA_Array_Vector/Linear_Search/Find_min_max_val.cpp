#include <iostream>

using namespace std;


int main() {

    int num[8] = {45, 12, 89, 7, 34, 90, 23, 56};
    int max = num[0];
    int min = num[0];

    for (int i = 0; i < 8; i++) {
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
    }

    cout << "Smallest element: " << min << "\n";
    cout << "Largest element: " << max << "\n";

    return 0;
}