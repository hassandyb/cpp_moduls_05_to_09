


#include <iostream>
#include <string>


// template<class InputIterator, class T>
// InputIterator find(InputIterator first, InputIterator last, const T& value);

// the other one 

// size_t find(const std::string& str, size_t pos = 0) const noexcept;


int main() {
    std::string sentence = "The quick brown fox jumps over the lazy dog";
    std::string word = "fox";

    // Find the position of the word "fox" in the sentence
    size_t position = sentence.find(word);

    if (position != std::string::npos) {
        std::cout << "The word \"" << word << "\" was found at position: " << position << std::endl;
    } else {
        std::cout << "The word \"" << word << "\" was not found." << std::endl;
    }

    return 0;
}
