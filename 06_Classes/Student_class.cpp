// ==========================================
// SIMULATING: Student.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Student
{

    string name;
    double grade;

    public:
    void setStudent(string newNAme, double newGrade);
    void showStudent();
    bool isPassed();

};

// ==========================================
// SIMULATING: .cpp
// ==========================================
//#include "Student.hpp"

void Student::setStudent(string newName, double newGrade)
{
    name = newName;
    grade = newGrade;
}

void Student::showStudent()
{
    cout << "Name: " << name << "\n";
    cout << "Grade: " << grade << "\n";
}

bool Student::isPassed()
{
    if (grade >= 75)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "Student.hpp"

int main()
{

    Student student1;
    student1.setStudent("John", 74);
    student1.showStudent();
    if (student1.isPassed())
    {
        cout << "PASSED!\n";
        cout << "\n";
    }
    else 
    {
        cout << "FAILED!\n";
        cout << "\n";
    }

    Student student2;
    student2.setStudent("Erp", 98);
    student2.showStudent();
    if (student2.isPassed())
    {
        cout << "PASSED!\n";
        cout << "\n";
    }
    else 
    {
        cout << "FAILED!\n";
        cout << "\n";
    }


    return 0;
}