

// What is std::istringstream?

// std::istringstream is a class in the C++ Standard Library that represents an input string stream. 
// It is used to treat strings as input streams, 
// enabling operations like extraction (using >> operator) and formatting (using << operator) 
// just like with other input/output streams.


#include <iostream>
#include <string>
#include <sstream>

int main() 
{
    // Declare a string
    std::string inputString = "123 456";

    // Create an istringstream object and initialize it with the input string
    std::istringstream iss(inputString);

    // Variables to store extracted integers
    // int num1, num2;

	// string s to strore exatracted sytrings
	std::string num1, num2;

    // Extract integers from the input string
    iss >> num1 >> num2;

    // Output the extracted integers
    std::cout << "Extracted ---integers: " << num1 << " and " << num2 << std::endl;



    return 0;
}


// int main ()
// {

// 	// Create another istringstream object to demonstrate output operations
//     std::ostringstream oss;

//     // Output some data to the ostringstream object
//     oss << "Hello, ";
//     oss << "world!";

//     // Extract the resulting string from the ostringstream object
//     std::string outputString = oss.str();

//     // Output the resulting string
//     std::cout << "Resulting string: " << outputString << std::endl;
// }
