#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int students = 0;

    cout << "How many Students: ";
    cin >> students;

    vector<double> grades;

    for (int i = 0; i < students; i++)
    {
        double grade;
        cout << "Enter Student Grade: ";
        cin >> grade;

        grades.push_back(grade);
    }

    double passed = 0;
    double failed = 0;

    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] >= 75) 
        {
            passed++;
        } 
        else 
        {
            failed++;
        }
    
    }

    double highest = 0;

    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] > highest)
        {
            highest = grades[i];
        }
    }

    double lowest = grades[0];

    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] < lowest)
        {
            lowest = grades[i];
        }
    }

    double average = 0;
    double total = 0;

    for (int i = 0; i < grades.size(); i++)
    {
        total += grades[i];

        average = total / grades.size();
    }

    
    cout << "Passed: "<<passed << "\n";
    cout << "Failed: "<<failed << "\n\n";

    cout << "Highest: " << highest << "\n";
    cout << "Lowest: "<<lowest << "\n";
    cout << "Average: "<<average << "\n";
    
    return 0;
}