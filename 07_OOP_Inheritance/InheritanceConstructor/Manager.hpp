#include "Employee.hpp"

using namespace std;

class Manager : public Employee{
    public:
    using Employee::Employee;
    Manager(string newName);
};