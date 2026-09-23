#include <iostream>
#include <vector>

using namespace std;

int main() 
{

    vector<int> num = {15, 42, 9, 77, 23};

    int largest = num[0];

    for (int i = 0; i < num.size(); i++)
    {
        //cout << num[i];

        if (num[i] > largest) 
        {
            largest = num[i];
        }
    }

    cout << largest;

    return 0;
}