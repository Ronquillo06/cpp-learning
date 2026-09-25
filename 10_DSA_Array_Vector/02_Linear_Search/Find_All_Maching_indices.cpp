#include <iostream>

using namespace std;


int main() {

    int num[10] = {5, 12, 5, 8, 20, 5, 3, 5, 15, 5};

    int target;
    int count = 0;

    cout << "Enter target: ";
    cin >> target;

    for (int i = 0; i < 10; i++) {
        if (num[i] == target) {
            cout << "Found at index: " << i << "\n";
            count++;
        }
    }

    if (count == 0) {
        cout << "Target not found\n";
    } else {
        cout << "Total occurrences: " << count << "\n";
    }

    return 0;
}