


#include <iostream>
#include <sstream>


// int main ()
// {
// 	std::string str = "a b c d e f j h i";
// 	std::istringstream iss(str);


// 	while(iss >> str)
// 		std::cout << str << std::endl;
// }

#include <iostream>
#include <sstream> // Include this header for std::istringstream

int main() {
    std::string str = "123 456 789";
    std::istringstream iss(str);
    int num;
    while (true) 
	{
		iss >> num;
		
        std::cout << "Number: " << num << std::endl;
		if(iss.eof() == true)
			break;
    }
    return 0;
}


