#include <iostream>

using namespace std;

int main() {

    int num[15] = {2, 5, 5, 5, 8, 12, 15, 15, 20, 24, 24, 24, 24, 30, 30};

    int target;
    cout << "Enter Target: ";
    cin >> target;

    int left = 0;
    int right = 14;
    int first = -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(num[mid] == target) {
            first = mid; 
            right = mid -1;
        } else if(num[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    left = 0;
    right = 14;
    int last = -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(num[mid] == target) {
            last = mid;
            left = mid + 1;
        } else if (num[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (first != -1 && last != -1) {
        int occu = (last - first) + 1;
        cout << "Target: " << target << "\n";
        cout << "Occurrence: " << occu << "\n";
    } else {
        cout << "Target Not Found!\n";
        cout << "Occurrences: 0\n";
    }

    

    return 0;
}