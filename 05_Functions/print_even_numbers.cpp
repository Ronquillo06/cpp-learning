#include <iostream>

using namespace std;

void evenNumbers()
{
    int even = 20;

    for (int i = 1; i <= even; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }


    }
}
int main()
{

    evenNumbers();

    return 0;
}