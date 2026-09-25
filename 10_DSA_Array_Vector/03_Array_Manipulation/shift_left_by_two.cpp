#include <iostream>

using namespace std;


int main() {

    int num[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    /*  
        Before:
        10 20 30 40 50 60 70 80

        After:
        30 40 50 60 70 80 10 20
    */

    int temp = num[0];
    int  temp2 = num[1];

    /*num[0] = num[2];
    num[1] = num[3];
    num[2] = num[4];
    num[3] = num[5];
    num[4] = num[6];
    num[5] = num[7];*/

    for (int i = 0; i < 6; i++) {
        num[i] = num[i + 2];
    } 

    num[6] = temp;
    num[7] = temp2;

    for (int i = 0; i < 8; i++) {
        cout << num[i] << " ";
    }


    return 0;
}