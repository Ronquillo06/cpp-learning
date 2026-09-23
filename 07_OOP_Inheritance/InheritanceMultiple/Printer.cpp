#include <iostream>
#include <string>

using namespace std;

class Printer {

    public:
    void print() {
        cout << "Printing...\n";
    }

};

class Scanner {

    public:
    void scan(){
        cout << "Scanning...\n";
    }


};

class AllInOnePrinter : public Printer, public Scanner {



};



int main() {


    AllInOnePrinter machine;
    machine.print();
    machine.scan();

    return 0;
};