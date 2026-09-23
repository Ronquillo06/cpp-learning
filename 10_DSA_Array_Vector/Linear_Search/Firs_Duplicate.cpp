#include <iostream>

using namespace std;

int main() {

    int num[8] = {4, 7, 2, 9, 7, 5, 2, 8};

    int firstDup = -1;
    int firstIndex = -1;
    int secondIndex = -1;
    bool foundDuplicate = false;
    
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (num[i] == num[j]) {
                    if (!foundDuplicate) {
                    firstDup = num[i];
                    firstIndex = i;
                    secondIndex = j;
                    foundDuplicate = true;
                }
            }
        }
    }

    /*for (int i = 0; i < 8; i++) {
    for (int j = i + 1; j < 8; j++) {
        if (num[i] == num[j]) {
            firstDup = num[i];
            firstIndex = i;
            secondIndex = j;
            foundDuplicate = true;
            break; // Stop inner loop immediately
        }
    }
        if (foundDuplicate) {
            break; // Stop outer loop immediately
        }
    }*/

    if (firstIndex != -1) {
        cout << "First duplicate: "<< firstDup << "\n";
        cout << "First index: " << firstIndex << "\n";
        cout << "Second index: " << secondIndex << "\n";
    } else {
        cout << "No duplicates found\n";
    }   
    return 0;
}

