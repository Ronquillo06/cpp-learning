#include <iostream>

using namespace std;

int main() {

    int a[6] = {2, 6, 10, 15, 21, 30};
    int b[5] = {1, 5, 9, 14, 25};
    int result[11];
    //1 2 5 6 9 10 14 15 21 25 30

    int i = 0;
    int j = 0;
    int k = 0;
    int comparisons = 0;

    while(i < 6 && j < 5) {
        if(a[i] < b[j]) {
            result[k] = a[i];
            i++;
        } else {
            result[k] = b[j];
            j++;
        }
        k++;
        comparisons++;
    }

    while (i < 6) {
        result[k] = a[i];
        i++;
        k++;
    }

    while (j < 5) {
        result[k] = b[j];
        j++;
        k++;
    }

    cout << "Merged array: ";
    for (int idx = 0; idx < 11; idx++) {
        cout << result[idx] << " ";
    }
    cout << "\n";
    cout << "Comparisons: " << comparisons << "\n";

    return 0;
}