#include <iostream>

using namespace std;

int main() {

    int num[8] = {42, 17, 89, 23, 61, 5, 34, 72};

    int smallest = num[0];
    int secondsmall = num[0];

    for (int i = 0; i < 8; i++) {
        if (num[i] < smallest) {
            secondsmall = smallest;
            smallest = num[i];
        }

        if (num[i] < secondsmall && num[i] != smallest) {
            secondsmall = num[i];
        }
    }

    cout << "Smallest: " << smallest << "\n";
    cout << "Second smalles: " << secondsmall << "\n";

    return 0;
}

