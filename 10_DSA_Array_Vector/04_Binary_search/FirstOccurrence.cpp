#include <iostream>

using namespace std;

int main() {

    int num[12] = {2, 5, 5, 5, 8, 12, 15, 15, 20, 24, 24, 30};

    int target;
    cout << "Enter Target: ";
    cin >> target;

    int left = 0;
    int right = 11;
    int index = -1;
    

    

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (num[mid] == target) {
            index = mid;
            right = mid - 1;
        } else if (num[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (index != -1) {
        cout << "First Occurrence: " << index << "\n"; 
    } else {
        cout << "Target Not Found!\n";
    }

    return 0;
}