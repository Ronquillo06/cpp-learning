#include <iostream>

using namespace std;

int main() {

    int num[10] = {12, 5, 8, 5, 20, 3, 8, 15, 3, 10};
    int n = 10;

    // 1. Print Original Array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << "\n\n";

    // 2 & 3. Find Min and Max
    int largest = num[0];
    int smallest = num[0];

    for (int i = 1; i < n; i++) {
        if (num[i] < smallest) {
            smallest = num[i];
        }
        if (num[i] > largest) {
            largest = num[i];
        }
    }

    // 4 & 5. Target Search & Occurrences
    int target = 0;
    int firstindex = -1;
    int occurrences = 0;

    cout << "Enter Target: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (num[i] == target) {
            if (firstindex == -1) {
                firstindex = i;
            }
            occurrences++;
        }
    }

    cout << "Largest: " << largest << "\n";
    cout << "Smallest: " << smallest << "\n";
    cout << "First index: " << firstindex << "\n";
    cout << "Occurrences: " << occurrences << "\n\n";

    // 6 & 7. Selection Sort and Comparisons
    int comparisons = 0;

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(num[j] < num[minIndex]) {
                minIndex = j;
            }
        }

        int temp = num[i];
        num[i] = num[minIndex];
        num[minIndex] = temp;
    }

    // Print Sorted Array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << "\n";
    cout << "Comparisons made by Selection Sort: " << comparisons << "\n";

    return 0;
}