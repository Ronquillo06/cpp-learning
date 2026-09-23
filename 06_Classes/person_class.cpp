#include <iostream>
using namespace std;



//person.hpp
class Person
{
    private:

        string name;
        int age;
    public:
    //method declared
        void setInfo(string newName, int newAge);
        void showInfo();

};
//person.cpp
void Person::setInfo(string newName, int newAge)
{
    name = newName;
    age = newAge;
}

void Person::showInfo()
{
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
}
//main.cpp

//#include "person.hpp"

int main()
{
    Person person1;

    person1.setInfo("John", 18);
    person1.showInfo();

    return 0;
}