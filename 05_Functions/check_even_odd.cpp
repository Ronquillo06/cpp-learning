#include <iostream>

using namespace std;

void checkEvenOdd(int num)

{

    if (num % 2 == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }

}

int main()
{

    checkEvenOdd(2);

    return 0;
}