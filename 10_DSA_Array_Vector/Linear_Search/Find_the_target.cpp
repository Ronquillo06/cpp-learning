#include <iostream>

using namespace std;

int main() {

    int num[8] = {12, 5, 8, 20, 3, 15, 7, 10};
    int target;

    cout << "Enter target: ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < 8; i++) {
        if (num[i] == target) {
            cout << "Found at index: " << i << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found\n";  
    }

    return 0;
}