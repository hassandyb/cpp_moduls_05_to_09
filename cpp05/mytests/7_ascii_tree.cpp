#include <iostream>
#include <fstream>

int main() {
    // Open a file stream for writing
    std::ofstream file("my_tree.txt");

    // Check if the file was opened successfully
    if (file.is_open()) {
        // Write the ASCII tree to the file
        file << "         *\n";
        file << "        / \\\n";
        file << "       /   \\\n";
        file << "      /     \\\n";
        file << "     /       \\\n";
        file << "    /_________\\\n";
        file << "       |   |\n";
        file << "       |   |\n";
        file << "       |___|\n";
        
        // Close the file stream
        file.close();
        
        std::cout << "ASCII tree written to my_tree.txt successfully.\n";
    } else {
        std::cerr << "Error: Unable to open file for writing.\n";
    }

    return 0;
}
