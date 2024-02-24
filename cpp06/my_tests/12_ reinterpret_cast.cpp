


#include <iostream>

int main() {
    int num = 10;
    int* ptr = &num;

    // Reinterpret the pointer to an integer as a pointer to a float
    float* floatPtr = reinterpret_cast<float*>(ptr);

    std::cout << "Value of integer: " << num << std::endl;
    std::cout << "Reinterpreted as float: " << *floatPtr << std::endl;

    return 0;
}




// #include <iostream>

// int main() {
//     int num = 42;
//     int& ref = num;

//     // Reinterpret the reference to an integer as a reference to a double
//     double& doubleRef = reinterpret_cast<double&>(ref);

//     std::cout << "Value of integer: " << num << std::endl;
//     std::cout << "Reinterpreted as double: " << doubleRef << std::endl;

//     return 0;
// }



