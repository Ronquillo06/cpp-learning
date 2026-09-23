#include <iostream>

int main()

{
    int num;
    int even = 0;
    int odd = 0;


    std::cout << "Enter number: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++) 
{
    if ( i % 2 == 0) 
    {
        even++;
    } 

    else if (i % 2 != 0) 
    {
        odd++;
    }
}

    std::cout << "Even Numbers: " << even << "\n";
     std::cout << "Odd Numbers: " << odd << "\n";

  return 0;
}