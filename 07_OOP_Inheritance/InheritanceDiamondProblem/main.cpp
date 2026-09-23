#include <iostream>

using namespace std;

class BasedClass{
    public:
    void someMethod();
};
//fix using virtual before public BasedClass
class DerivedClass1 : virtual public BasedClass{

};
//fix using virtual before public BasedClass
class DerivedClass2 : virtual public BasedClass{

};

class DerivedClass3 : public DerivedClass1, public DerivedClass2{

};

int main(){

    DerivedClass3 tdc;
    tdc.someMethod();//ERROR "DerivedClass3::someMethod" is ambiguous
    //or fix using tdc.DerivedClass1::someMethod();
return 0;
}

