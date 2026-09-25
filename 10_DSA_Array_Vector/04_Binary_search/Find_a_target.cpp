#include <iostream>


using namespace std;

int main() {

    int num[10] = {3, 7, 12, 18, 24, 31, 39, 45, 52, 60};
    int target;

    cout << "Enter target:";
    cin >> target;
    
    int left = 0;
    int right = 9;
    int index = -1;
    bool found = false;
    int count = 0;

    while (left <= right) {
        count++;

        int mid = left + (right - left) / 2;

        if(num[mid] == target) {
            found = true;
            index = mid;
            break;
        } else if (num[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }

    }

    if(found) {
        cout << "Target Found!\n";
        cout << "Index: " << index << "\n";
    } else {
        cout << "Target Not Found!\n";
    }

    cout << "Iterations: " << count << "\n";

    return 0;
}