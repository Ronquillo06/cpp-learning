#include <iostream>
#include <vector>

using namespace std;

int largest(int a, int b)
{

    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int smallest(int a, int b)
{
    if (a < b)
    {
        return a;
    }

    return b;
}

int countEven(vector<int> nums)
{
    int count = 0;

    for (int i = 0; i <nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;

}



int main()
{

    int theLargest = largest(9, 10);

    cout << "The Largest: " << theLargest << "\n";
    
    int theSmallest = smallest(30, 1);

    cout << "The Smallest: " << theSmallest << "\n";

    vector<int> num1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int totalEven = countEven(num1);

    cout << "Total Even: " << totalEven << "\n";

    return 0;
}