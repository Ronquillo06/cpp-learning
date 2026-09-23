#include <iostream>

int main() {



    std::string username;
    std::string password;

    std::cout << "Enter Username: ";
    std::cin >> username;
    std::cout << "Enter Password: ";
    std::cin >> password;

    if(username == "admin" && password == "1234" ) {
        std::cout << "Login Successful\n";
    } else {std::cout << "Wrong Credentials\n"; }

    return 0;
}