#include <iostream>

using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating.\n";
    }
};
class Dog : public Animal {

};
class Cat : public Animal {

};
class Tiger : public Dog, public Cat {

};
int main() {

    Tiger tiger;

    tiger.Dog::eat();

}