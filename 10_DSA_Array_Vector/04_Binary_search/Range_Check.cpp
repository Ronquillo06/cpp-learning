#include <iostream>

using namespace std;

int main() {

    int num[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    int target;
    cout << "Enter Target:";
    cin >> target;

    int left = 0;
    int right = 9;
    int index = -1;
    int count = 0;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        count++;
        if(num[mid] == target) {
            index = mid;
            break;
        } else if(num[mid] < target) {
            left = mid + 1;
        } else {
            right = mid -1;
        }
    }

    if (index != -1) {
        cout << "Target Found!\n";
        cout << "Index: " << index << "\n";
        cout << "Iterations: " << count << "\n";
    } else {
        cout << "Target: " << target << "\n";
        cout << "Target Not Found!\n";
    }


    return 0;
}