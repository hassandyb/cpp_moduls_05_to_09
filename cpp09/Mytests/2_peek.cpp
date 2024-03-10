

#include <iostream>

int main() {
    // Open the standard input stream
    std::istream& input_stream = std::cin;

    // Read the next character without extracting it
    int next_character = input_stream.peek();

    if (next_character != EOF) {
        // Print the next character
        std::cout << "Next character in input stream: " << char(next_character) << std::endl;
    } else {
        std::cout << "End of input stream reached." << std::endl;
    }

    return 0;
}

