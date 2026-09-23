#include <iostream>

using namespace std;

int main() {

    int num[10] = {64, 25, 12, 22, 11, 90, 34, 7, 55, 18};

    int comparisons = 0;
    int n = 10;

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            comparisons++;
            if(num[j] < num[minIndex]) {
                minIndex = j;
            }
        }

        int temp = num[i];
        num[i] = num[minIndex];
        num[minIndex] = temp;

    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << "\n";

    cout << "Comparisons: " << comparisons << "\n";

    return 0;
}