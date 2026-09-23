#include <iostream>

using namespace std;

void printStars()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
int main()
{


    printStars();


    return 0;
}