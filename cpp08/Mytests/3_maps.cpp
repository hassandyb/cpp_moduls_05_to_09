







#include <iostream>
#include <map>




int main ()
{
	std::map<int, std::string> M;
	M[0] = "zero";
	M[1] = "one";
	M[2] = "two";
	M[3] = "three";

	// Test 1 : ....
	// std::cout << "Map elements : ";
	// std::map<int, std::string>::const_iterator it;
	// for(it = M.begin(); it != M.end(); it++)
	// 	std::cout << " (" << it->first << ", " << it->second << ")";


	// Test 2 : ...size ()
	// std::cout << "Size of M : " << M.size() << std::endl;

	// Test 3 : find
	// std::map<int, std::string>::iterator it = M.find(7365);
    // if (it != M.end()) 
    //     std::cout << "Element found: " << it->second << std::endl; // Output: Element found: Two

	// else 
    //     std::cout << "Element not found : "  << std::endl;

	// Test 4 : erase () ----------------------
	// for(std::map<int, std::string>::iterator it = M.begin(); it != M.end(); it++)
	// 	std::cout << " (" << it->first << ", " << it->second << ")";
	// std::cout << std::endl;
	// std::map<int, std::string>::iterator it = M.find(1);
	// M.erase(it);
	// for(std::map<int, std::string>::iterator it = M.begin(); it != M.end(); it++)
	// 	std::cout << " (" << it->first << ", " << it->second << ")";


	// Test 5 : clear ...
	// for(std::map<int, std::string>::iterator it = M.begin(); it != M.end(); it++)
	// 	std::cout << " (" << it->first << ", " << it->second << ")";
	// M.clear();
	// if (M.empty()) {
    //     std::cout << "\n\nMap is empty" << std::endl;
    // } else {
    //     std::cout << "\n\nMap is not empty" << std::endl;
    // }

	// Test 6 : count() --------------

	// int count = M.count(0);
	// std::cout << "Number of elements with key 2: " << count << std::endl; // Output: Number of elements with key 2: 1


}


