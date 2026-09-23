#include <iostream>
int main() {

// note for basics
 int x = 5;
 int y = 7;
 int sum = x + y;
 int answer = x * y;

 std::cout << x << '\n';
 std::cout << y << '\n';
 std::cout << sum << '\n';
 std::cout << answer << '\n';

 //interger (whole number)
int age = 20;
int year = 2025;
int days = 7;

std::cout << "hello guyz i'm " << age << " years old\n";
std::cout << "and my birth year is " << year << '\n';

//double (number including decimal)
double price = 70.99;
double gwa = 1.67;
double temperature = 17.2;

std::cout << price << "$" << '\n';
std::cout << gwa << " paldo erp nag review!!" << '\n';
std::cout << temperature << " malamig lamig!!" << '\n';

//single character
char grade = 'H';
char initial = 'S';
char percent = '%';
char currency = '$';

std::cout << grade << '\n';
std::cout << initial << '\n';
std::cout << percent << '\n';
std::cout << currency << '\n';

//boolean (true or false)
bool student = false;
bool power = true;
bool forSale = true;

//string (object that represents a sequence of text)
std::string name = "HooleeSheet";
std::string day = "friday";
std::string food = "pizza";
std::string address = "5914 rosales st.";

std::cout << "hello my name is " << name << " I live in " << address << '\n';
std::cout << "and my favorite food is " << food << '\n' << day << " is a good day. ";

// ------------------------------------------------------------

                          //CONST
//The const keyword specifies that a variable's value is constant
//Tells the compiler to "prevent anything from modifying it"
//{read only}

/*double pi = 3.14159;
double radius = 10;
double circumference = 2 * pi * radius;

std::cout << circumference << "cm\n";*/

const double PI = 3.14159;
double radius = 10;
double circumference = 2 * PI * radius;

const int LIGHT_SPEED = 6969667;
const int WIDTH = 6790;
const int HEIGHT = 170;


std::cout << circumference << "cm\n";

//---------------------------------------------------------------------

//Namespace = preventing name conflicts in large project.
//allows for identically named entities as long as the namespace are different

 /*namespace first{

int x = 1;
 }
 namespace second{
    int x 0;
 }*/

 int x = 0;
 


    return 0;
}
