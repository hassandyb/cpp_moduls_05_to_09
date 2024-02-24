


#include <iostream>

int main() 
{
    int x = 10;
    int& ref = x; // Declare a reference variable ref referring to x

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of ref: " << ref << std::endl;

    ref = 20; // Modify the value of x through the reference ref

    std::cout << "Value of x after modification: " << x << std::endl;
    std::cout << "Value of ref after modification: " << ref << std::endl;

    return 0;
}
