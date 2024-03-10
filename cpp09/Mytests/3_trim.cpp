

#include <iostream>
#include <string>

// Function to trim leading and trailing whitespace from a string
std::string trim(const std::string& str) 
{
    size_t start = str.find_first_not_of(" \t\n\r");
    if (start == std::string::npos) // If the string contains only whitespace
        return "";

    size_t end = str.find_last_not_of(" \t\n\r");
    return str.substr(start, end - start + 1);
}

int main() 
{
    std::string input = "   Hello, world!   ";
    std::string trimmed = trim(input);

    std::cout << "Original: \"" << input << "\"" << std::endl;
    std::cout << "Trimmed: \"" << trimmed << "\"" << std::endl;

    return 0;
}


