#include <iostream>
#include "Student.hpp"
#include "Person.hpp"
using namespace std;

int main()
{
    Student student1;
    student1.study();

    cout << student1.getAge() << "\n";

    return 0;
}