

#include <iostream>
#include <map>


// he std::map<int, std::string> is a map where keys are integers (int) 
// and values are strings (std::string). In this context:\


int main() 
{
    // Creating a map with key as integer and value as string
    std::map<int, std::string> M;

    // Inserting elements into the map using the insert function
    M.insert(std::make_pair(1, "hassan deeb"));
    M.insert(std::make_pair(2, "chaimaa gouiame"));
    M.insert(std::make_pair(3, "soething"));
    // other ways 

    // M[key] = value;
    // M.emplace(key, value);

    // Accessing elements using the first and second member functions
    // std::cout << "Key: " << M.begin()->first << ", Value: " << M.begin()->second << std::endl;

    // Iterating through the map and printing all key-value pairs
    std::cout << "Map contents:" << std::endl;
    std::map<int, std::string>::iterator it;
    for (it = M.begin(); it != M.end(); ++it) 
	{
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    return 0;
}




// #include <iostream>
// #include <map>
// #include <string>

// int main() {
//     // Creating a map with key as integer and value as string
//     std::map<int, std::string> myMap;

//     // Adding key-value pairs to the map
//     myMap[1] = "One";
//     myMap[2] = "Two";
//     myMap[3] = "Three";

//     // Accessing and printing the elements of the map
//     std::cout << "Key 0: " << myMap[0] << std::endl;
//     std::cout << "Key 1: " << myMap[1] << std::endl;
//     std::cout << "Key 2: " << myMap[2] << std::endl;
//     std::cout << "Key 3: " << myMap[3] << std::endl;

//     return 0;
// }


