#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<double> scores = {78, 85, 92, 67, 88};

    double total = 0;

    for (int i = 0; i < scores.size(); i++)
    {
        total += scores[i];
    }

    double highest = scores[0];

    for (int i = 0; i < scores.size(); i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
        }
    }

    double average;

    average = total / scores.size();

    cout << "Total: " << total << "\n";
    cout << "Average: " << average << "\n";
    cout << "Highest: " << highest << "\n";

    return 0;
}