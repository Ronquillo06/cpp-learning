#include <iostream>
#include <vector>

using namespace std;

int main() 
{

    vector<int> num = {1, 2, 3, 4, 5};

    for (int i = 0; i < num.size(); i++)
    {
        num[i] = num[i] * 2;
    }

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << "\n";
    }

    return 0;
}