// ==========================================
// SIMULATING: Employee.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Employee
{

    //attributes
    private:
    string empName;
    int id;

    //Method
    public:
    Employee(string name, int num);
    void showBadge();


};


// ==========================================
// SIMULATING: Employee.cpp
// ==========================================

    Employee::Employee(string name, int num)
    {
        empName = name;
        id = num;
    }

    void Employee::showBadge()
    {
            cout << "Name: " << empName << "\n";
            cout << "ID: " << id << "\n";
    }

// ==========================================
// SIMULATING: main.cpp
// ==========================================

int main()
{
    
    Employee emp1("Alice", 101);
    emp1.showBadge();


    return 0;
}
