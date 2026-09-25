#include <iostream>

using namespace std;

int main() {
    int target;
    cout << "Enter target: ";
    cin >> target;

    int count = 0;

    int num[8] = {5, 2, 5, 8, 5, 1, 3, 5};

    for (int i = 0; i < 8; i++) {
        if (num[i] == target) {
            count++;
        }
    }

    cout << target << " appears " << count << " times.\n";
}