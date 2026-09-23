#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> num = {11, 12, 13, 14, 15};

    

    for (int i = num.size() - 1; i >= 0; i--)
    {
        cout << num[i] << "\n";
    }

    return 0;
}