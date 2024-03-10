


#include <iostream>
#include <fstream>


// std::istream& getline(std::istream& is, std::string& str, char delim);



int main()
{
	std::ifstream file("/Users/hed-dyb/Desktop/cpp09/ex00/data.csv");
	if(file.is_open() == false)
	{

		std::cout << "failed to open this file " << std::endl;
		return 0;
	}
	std::string line;
	while(1)
	{
		std::getline(file, line);
		std::cout << line << std::endl;
		if(file.eof() == true)
			break;
	}
	file.close();
}

