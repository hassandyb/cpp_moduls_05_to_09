


#include <cstdlib>
#include <iostream>
#include <cstring>

int main() {
    const int BUFFER_SIZE = 100;
    char input[BUFFER_SIZE];

    while (true) 
	{
        std::cout << "Enter a input: ";
        std::cin.getline(input, BUFFER_SIZE);


        char* endptr;
        double number = strtod(input, &endptr);

		std::cout << "Input    :" << input << std::endl;
        std::cout << "Value    : " << number << std::endl;
        std::cout << "The rest : " << endptr << std::endl;
    }

    return 0;
}
