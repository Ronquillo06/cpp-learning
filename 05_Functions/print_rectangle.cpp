#include <iostream>

using namespace std;


void printRectangle(int rows, int cols)
{


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
} 

int main()
{

    printRectangle(3,5);


    return 0;
}