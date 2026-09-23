#include <iostream>


using namespace std;


void multiplicationTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        int answer = 0;
        answer = i * num;
        cout << num << " x " << i << " = " << answer << "\n"; 
    }
}


int main()
{

    multiplicationTable(9);


    return 0; 
}