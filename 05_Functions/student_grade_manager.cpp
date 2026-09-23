#include <iostream>
#include <vector>

using namespace std;

void showMenu()
{
 

    cout << "========== Student Grade Manager ==========\n";
    cout << "1. Add Grade\n";
    cout << "2. Show Grades\n";
    cout << "3. Show Highest\n";
    cout << "4. Show Lowest\n";
    cout << "5. Show Average\n";
    cout << "6. Exit\n";
    cout << "===========================================\n";
    cout << "Enter choice: ";

}

void addGrade(vector<double>& grades)
{
    int gradeCount = 0;
    cout << "Enter How Many Grades To Input: ";
    cin >> gradeCount;

    for (int i = 0; i < gradeCount; i++)
    {

        double grade = 0;
        cout << "Enter Grade: ";
        cin >> grade;

        grades.push_back(grade);
    }

    
}

void showGrades(vector<double>& grades)
{
    if (grades.empty())
    {
        cout << "No grades have been entered yet\n";
        return;
    }

    for (int i = 0; i < grades.size(); i++)
    {
        cout << "Grade: " << grades[i] << "\n";
    }
}

void getAverage(vector<double>& grades)
{
    if (grades.empty())
    {
        cout << "No grades have been entered yet\n";
        return;
    }

    double total = 0;
    double average = 0;

    for (int i = 0; i < grades.size(); i++)
    {
        total += grades[i];
    }
    
    average = total / grades.size();
    cout << "Average: " << average << "\n";
}

double getHighest(vector<double>& grades)
{
    if (grades.empty())
    {
        return 0;
    }

    double highest = grades[0];

    for (int i = 0; i < grades.size(); i++)
    {

        if (grades[i] > highest)
        {
            highest = grades[i];
        }
    }

    return highest;
}

double getLowest(vector<double>& grades)
{
    if (grades.empty())
    {
        return 0;
    }

    double lowest = grades[0];

    for (int i = 0; i < grades.size(); i++)
    {

        if (grades[i] < lowest)
        {
            lowest = grades[i];
        }
    }

    return lowest;
}






int main()
{

    vector<double> grades;
    int choice;
    
    do
    {
        showMenu();
        cin >> choice;

        if (choice == 1)
        {
            addGrade(grades);
        }
        else if (choice == 2)
        {
            showGrades(grades);
        }
        else if (choice == 3)
        {

            if (grades.empty())
            {
                cout << "No grades have been entered yet\n";
            }
            else
            {
                cout << "The Highest Grade: " << getHighest(grades) << "\n";
            }

        }
        else if (choice == 4)
        {
            
            if (grades.empty())
            {
                cout << "No grades have been entered yet\n";
            }
            else 
            {
                cout << "The Lowest Grade: " << getLowest(grades) << "\n";
            }
        }
        else if (choice == 5)
        {
            getAverage(grades);
        }
        else if (choice == 6)
        {
            cout << "Goodbye!\n";
        }

        cout << "\n";
    }
    while (choice != 6);
    

    return 0;
}