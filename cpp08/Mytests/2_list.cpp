


#include <iostream>
#include <list>



int main() 
{
    std::list<char> L;

    L.push_back('a');
    L.push_back('b');
    L.push_back('c');

    // Test 1 : using iterators
    // for (std::list<char>::iterator it = L.begin(); it != L.end(); it++)
    //     std::cout << " " << *it;
    // std::cout << std::endl;


    // Test 2: the size  of the list
    // std::cout << "Size of the list :   " << L.size() << std::endl;

    // Test 3 : insert an element iside th list

    // for(std::list<char>::iterator it = L.begin(); it != L.end(); it++)
    //     std::cout << " " << *it;
    // std::cout << std::endl;
    // std::list<char>::iterator it = L.begin();
    // it++; // insert - erase
    // L.insert(it, 'z');// insertz b in place of b , and move it to new posion of b
    // for(std::list<char>::iterator it = L.begin(); it != L.end(); it++)
    //     std::cout << " " << *it;
    // std::cout << std::endl;
    // it = (L.begin());
    // it++;
    // L.erase(it);
    // for(std::list<char>::iterator it = L.begin(); it != L.end(); it++)
    //     std::cout << " " << *it;

 


    return 0;
}
