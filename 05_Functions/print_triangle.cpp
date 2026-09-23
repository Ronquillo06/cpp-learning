#include <iostream>

using namespace std;

void printTriangle(int rows)
{
    for (int i = 0; i <= rows; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{

    printTriangle(5);

    return 0;
}