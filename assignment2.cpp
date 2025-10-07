#include <iostream>

int main() {
    
    // ask the user to input any number
    // loop and print from 1 to the user number?
    std::cout << "\Enter number between 1 and 10!" << std::endl;
    int userNumber;
    std::cin >> userNumber;  
    
    for (int i = 1; i <= userNumber; i++)
    {
        /* code */
        std::cout<< i <<std::endl;
    }
    
    return 0;
}
