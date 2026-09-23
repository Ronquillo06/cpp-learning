#include <iostream>

using namespace std;

void countToN(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << i << "\n";
    }
}

int main()
{


    countToN(5);


    return 0;
}