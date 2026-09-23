// ==========================================
// SIMULATING: AtmSession.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class AtmSession
{
    int pin;
    bool isAuthenticated;

    public:
    void setupPin(int initialPin);
    void enterPin(int inputPin);
    bool logout();
    void showSessionStatus();
};

// ==========================================
// SIMULATING: AtmSession.cpp
// ==========================================
// #include "AtmSession.hpp"

void AtmSession::setupPin(int initialPin)
{
    pin = initialPin;
    isAuthenticated = false;
}
void AtmSession::enterPin(int inputPin)
{
    if(inputPin == pin)
    {
        isAuthenticated = true;
        cout << "Access Granted!\n";
    }
    else
    {
        cout << "Incorrect PIN!\n";
    }
}
bool AtmSession::logout()
{
    return isAuthenticated = false;
}
void AtmSession::showSessionStatus()
{
    if(isAuthenticated == true)
    {
        cout << "Logged In\n";
    }
    else 
    {
        cout << "Logged Out\n";
    }
}

// ==========================================
// SIMULATING: main.cpp
// ==========================================
// #include "AtmSession.hpp"

int main()
{

    AtmSession atmsession;
    atmsession.setupPin(1234);
    atmsession.enterPin(1234);
    atmsession.showSessionStatus();

    atmsession.setupPin(1234);
    atmsession.enterPin(1234);
    atmsession.logout();
    atmsession.showSessionStatus();

    atmsession.setupPin(1234);
    atmsession.enterPin(1235);
    atmsession.showSessionStatus();

    return 0;
}