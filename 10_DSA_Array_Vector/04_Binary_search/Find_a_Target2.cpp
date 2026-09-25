#include <iostream>

using namespace std;

int main() {

    int num[15] = {2, 5, 9, 13, 18, 24, 31, 37, 42, 48, 55, 63, 71, 80, 91};  

    int target;

    cout << "Enter Target:";
    cin >> target;

    int left = 0;
    int right = 14;
    bool found = false;
    int count = 0;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        count++;

        if(num[mid] == target) {
            index = mid;
            found = true;
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