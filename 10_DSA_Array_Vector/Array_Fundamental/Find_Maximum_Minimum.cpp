#include <iostream>
#include <iterator>
using namespace std;

int main() {

    int numbers[8] = {12, 5, 8, 20, 3, 15, 7, 10};

    int maxNum = numbers[0];
    int maxIndex = 0;

    int minNum = numbers[0];
    int minIndex = 0;

    for (int i = 0; i < 8; i++) {

        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
            maxIndex = i;
        }

        if (numbers[i] < minNum) {
            minNum = numbers[i];
            minIndex = i;
        }
    }
    
    cout << "Max Value: " << maxNum << "\n";
    cout << "Min Value: " << minNum << "\n";
    cout << "\n";
    cout << "Max Index: " << maxIndex << "\n";
    cout << "Min Index: " << minIndex << "\n";

    return 0;
}