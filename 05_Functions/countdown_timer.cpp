#include <iostream>

using namespace std;

void countDown()
{
    int num1 = 5;
    int count = 1;

    while (num1 >= count)
    {

        cout << num1 << "\n";
        num1--;
    }
    cout << "GO!\n";
}

int main()
{

    countDown();



    return 0;
}