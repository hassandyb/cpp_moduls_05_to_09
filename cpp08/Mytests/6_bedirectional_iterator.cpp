

#include <iostream>
#include <vector>
#include <list>
#include <iterator>




// int main() 
// {
//     // Bidirectional Iterator Example
//     std::cout << "\nBidirectional Iterator Example:" << std::endl;
    
//     std::list<int> L;
//     L.push_back(10);
//     L.push_back(20);
//     std::list<int>::iterator bidirectional_iter = L.end(); // Iterator pointing to the end of the list
//     --bidirectional_iter; // Move the iterator to the last element
//     std::cout << "Last element of list: " << *bidirectional_iter << std::endl; // Output the value of the last element

//     return 0;
// }


// type of iterator ...


// #include <iostream>
// #include <list>
// #include <typeinfo>

// int main() 
// {
//     typedef std::list<int>::iterator iterator_type;

//     iterator_type it;
//     bool is_bidirectional = typeid(std::bidirectional_iterator_tag) == typeid(std::iterator_traits<iterator_type>::iterator_category);
//     bool is_forward = typeid(std::forward_iterator_tag) == typeid(std::iterator_traits<iterator_type>::iterator_category);

//     if (is_bidirectional) 
//     {
//         std::cout << "Iterator type is bidirectional." << std::endl;
//     } else if (is_forward) {
//         std::cout << "Iterator type is forward." << std::endl;
//     } else {
//         std::cout << "Iterator type is unknown." << std::endl;
//     }

//     return 0;
// }


