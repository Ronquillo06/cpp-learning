#include <iostream> 

int main() 

{   

    int num;

    std::cout << "Enter Number: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++) 
    {
        for(int j = 1; j <= i; j++)  
        {

            std::cout << j;
        }
        
        std::cout << "\n";
        
    

    }
    return 0;
}