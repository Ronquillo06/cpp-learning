#include <iostream>
#include <vector>

using namespace std;

int main() 
{

    vector<int> num = {10, 20, 30, 40, 50};

    int sum = 0;
    

    for (int i = 0; i < num.size(); i++)
    {
        sum = sum + num[i];
    }

    cout << "Sum: " << sum;

    return 0;
}