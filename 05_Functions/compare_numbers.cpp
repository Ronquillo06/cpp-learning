#include <iostream>

using namespace std;

int larger = 0;
void compareNumbers(int a, int b)
{
    if (a > b )
    {
        larger = a;
    }
    else 
    {
        larger = b;
    }

    cout << larger << " is larger\n";
} 


int main()
{

 compareNumbers(30, -49);

    return 0;
}