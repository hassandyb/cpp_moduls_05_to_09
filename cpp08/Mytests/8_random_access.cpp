



#include <iostream>
#include <vector>
#include <list>
#include <iterator>


int main() 
{
    // Random Access Iterator Example

    std::vector<int> V;
    V.push_back(1);
    V.push_back(2);
    V.push_back(3);
    std::vector<int>::iterator random_access_iter = V.begin(); // Iterator pointing to the beginning of the vector
    std::advance(random_access_iter, 2); // Move the iterator two positions forward
    std::cout << "Third element of vector: " << *random_access_iter << std::endl; // Output the value of the third element

    return 0;
}




