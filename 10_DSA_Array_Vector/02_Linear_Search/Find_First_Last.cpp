#include <iostream>

using namespace std;


int main() {

    int num[10] = {5, 12, 5, 8, 20, 5, 3, 5, 15, 5};

    int firstIndex = -1;
    int lastIndex = -1;
    int target;

    cout << "Enter target: ";
    cin >> target;

    for (int i = 0; i < 10; i++) {
        if (num[i] == target && firstIndex == -1) {
            firstIndex = i;
        }

        if (num[i] == target) {
            lastIndex = i;
        }
    }
    if (firstIndex == -1) {
        cout << "Target not found\n";
    } else {    
        cout << "First occurrence: " << firstIndex << "\n";
        cout << "Last occurrence: " << lastIndex << "\n";
    }


    return 0;
}