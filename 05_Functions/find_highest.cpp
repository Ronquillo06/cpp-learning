#include <iostream>
#include <vector>

using namespace std;

int findHighest(vector<int> nums)
{

    int highest = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > highest) 
        {
            highest = nums[i];
        }
    }


    return highest;
}


int main()
{


    vector<int> num1 = {90, 98, 99, 98, 500};

    int theHighest = findHighest(num1);

    cout << "The Highest: " << theHighest << "\n";


    return 0;
}