// ==========================================
// SIMULATING: Login.hpp
// ==========================================

#include <iostream>
#include <string>

using namespace std;

class Login
{

    string username;
    string password;

    public:
    void setLogin(string new_username, string new_password);
    void login(string newUsername, string newPassword);
    void showUser();

};

// ==========================================
// SIMULATING: Login.cpp
// ==========================================
// #include "Login.hpp"

void Login::setLogin(string new_username, string new_password)
{
    username = new_username;
    password = new_password;
}
void Login::login(string inputUsername, string inputPassword)
{
    if (inputUsername == username && inputPassword == password)
    {
        cout << "Login Successful! Welcome back, " << username << ".\n";
    }
    else 
    {
        cout << "Login Failed! Invalid username or password.\n";
    }
}
void Login::showUser() {
    cout << "Registered User: " << username << " (Password is hidden for security)\n";
}
// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "Login.hpp"

int main()
{

    Login userAccount;
    
    // 1. Initialize the account credentials
    userAccount.setLogin("Ronquillo06", "SecurePass123");
    userAccount.showUser();

    // 2. Test a failed login attempt (Wrong password)
    cout << "\n--- Attempting Login (Wrong Password) ---\n";
    userAccount.login("Ronquillo06", "WrongPass");

    // 3. Test a failed login attempt (Wrong username)
    cout << "\n--- Attempting Login (Wrong Username) ---\n";
    userAccount.login("WrongUser", "SecurePass123");

    // 4. Test a successful login
    cout << "\n--- Attempting Login (Correct Credentials) ---\n";
    userAccount.login("Ronquillo06", "SecurePass123");


    return 0;
}