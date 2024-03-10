


#include <iostream>
#include <map>

int main() 
{
    std::map<std::string, std::string> myMap;
	myMap["a"] = "Zero";
	myMap["b"] = "One";
	myMap["c"] = "Two";
	myMap["d"] = "Three";



    // Search for a key
    std::map<std::string, std::string>::iterator it = myMap.find("b");
    if (it != myMap.end()) 
	{
        std::cout << "Found: " << it->second << std::endl;
    } 
	else 
	{
        std::cout << "Key not found!" << std::endl;
    }

    return 0;
}
