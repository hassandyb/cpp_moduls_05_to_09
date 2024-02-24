








// To convert a string to an integer in C++, you can use an `std::istringstream` object (`iss`) along with the extraction operator (`>>`). The `std::istringstream` class allows you to treat a string as an input stream, and the extraction operator (`>>`) is used to extract data from the stream.

// Here's how you can implement your `ft_convert_int` function:

// ```cpp
#include <iostream>
#include <string>
#include <sstream>

static void ft_convert_int(std::string input)
{
    // Create an istringstream object and initialize it with the input string
    std::istringstream iss(input);

    // Declare a variable to store the converted integer
    int nbr;

    // Extract the integer from the input string
    iss >> nbr;

    // Check if extraction was successful
    if (!iss.fail() && iss.eof()) {
        std::cout << "Conversion successful. Integer value: " << nbr << std::endl;
    } else {
        std::cout << "Conversion failed. Invalid input." << std::endl;
    }
}

int main() {
    // Test the function
    ft_convert_int("123"); // Output: Conversion successful. Integer value: 123
    ft_convert_int("abc"); // Output: Conversion failed. Invalid input.

    return 0;
}
// ```

// In this implementation:

// - We create an `std::istringstream` object `iss` and initialize it with the input string `input`.
// - We declare an integer variable `nbr` to store the converted integer.
// - We use the extraction operator (`>>`) to extract the integer from the `iss` stream and store it in `nbr`.
// - We check if the extraction was successful using `iss.fail()` and if we reached the end of the stream using `iss.eof()`.
// - If the conversion was successful, we print the integer value. Otherwise, we print an error message indicating that the conversion failed due to invalid input.

// This function will convert a string containing an integer to an actual integer and store it in the variable `nbr`. If the input string is not a valid integer, the conversion will fail.


















