// ==========================================
// SIMULATING: .hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Counter
{
    public:
    int count;

    void increment();
    void decrement();
    void reset();
    void show();

};
// ==========================================
// SIMULATING: .cpp
// ==========================================
//#include "Counter.hpp"

void Counter::increment()
{
    
    count ++;
}
void Counter::decrement()
{
    count --;
}
void Counter::reset()
{
    count = 0;
}
void Counter::show()
{
    cout << "Counter: " << count << "\n";
}
// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "Counter.hpp"

int main()
{

    Counter counter;
    counter.count = 0; // Initialize starting point
    counter.show();    // Expected: 0

    counter.increment();
    counter.show();    // Expected: 1

    counter.increment();
    counter.show();    // Expected: 2

    counter.decrement();
    counter.show();    // Expected: 1

    counter.reset();
    counter.show();    // Expected: 0


    return 0;
}