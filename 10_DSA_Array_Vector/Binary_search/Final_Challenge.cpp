#include <iostream>

using namespace std;

int main() {

    int num[20] = {3, 7, 11, 15, 19, 24, 28, 33, 37, 42, 47, 51, 56, 61, 65, 70, 74, 79, 85, 92};

    int target;
    cout << "Enter Target:";
    cin >> target;
    
    int left = 0;
    int right = 19;
    int index = -1;
    int count = 0;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        count++;

        if(num[mid] == target) {
            index = mid;
            break;
        } else if (num[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        
    }

    if(index != -1) {
        cout << "Target Found!\n";
        cout << "Index: " << index << "\n";
        cout << "Iterations: " << count << "\n"; 
    } else {
        cout << "Target Not Found\n";
        cout << "Iterations:" << count << "\n";
    }

    return 0;
}