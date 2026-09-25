#include <iostream>

using namespace std;

int main() {

    int num[7] = {10, 20, 30, 40, 50, 60, 70};

    /*  Before:
        10 20 30 40 50 60 70

        After:
        10 20 30 50 60 70
    */


    int index = 3;

    for (int i = index; i < 6; i++) {
        num[i] = num[i + 1];
    }

    for (int i = 0; i < 6; i++) {
        cout << num[i] << " ";
    }


    return 0;
}