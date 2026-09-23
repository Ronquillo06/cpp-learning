#include <iostream>

using namespace std;

int main() {

    int num[10] = {64, 25, 12, 22, 11, 90, 34, 7, 55, 18};
    int n = 10;
    int comparisons = 0;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            comparisons++;
            if(num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << "\n";
    cout << "Comparisons: " << comparisons << "\n";

    return 0;
}