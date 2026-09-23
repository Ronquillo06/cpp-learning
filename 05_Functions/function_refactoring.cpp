#include <iostream>
#include <vector>

using namespace std;

void multiplicationTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << (i * num) << "\n";
    }
}
//Function Refactoring
void table(int num, int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        cout << num << " x " << i << " = " << (i * num) << "\n";
    }
}

int main()
{
    

    //multiplicationTable(9);

    table(7, 10);
    
    return 0;
}