




#include <iostream>


template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() 
{

    int sum_int = add<int>(5, 3); 
    std::cout << "Sum of integers: " << sum_int << std::endl;

    double sum_double = add<double>(3.5, 2.7); 
    std::cout << "Sum of doubles: " << sum_double << std::endl;




    std::string str1 = "Hello, ";
    std::string str2 = "world!";
    
    std::string concatenated = add<std::string>(str1, str2);
    std::cout << "Concatenated string: " << concatenated << std::endl;






    return 0;
}








