#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num;

    num.push_back(5);
    num.push_back(10);
    num.push_back(15);
    num.push_back(20);
    num.push_back(25);

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << '\n';
    }

    return 0;
}