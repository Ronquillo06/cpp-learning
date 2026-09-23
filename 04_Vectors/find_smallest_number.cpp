#include <iostream>
#include <vector>

using namespace std;

int main () 
{

    vector<int> num = {15, 42, 9, 77, 23};

    int smallest = num[0];

    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }

    cout << "Smallest: " << smallest;

    return 0;
}