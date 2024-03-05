


#include <iostream>
#include <vector>




int main ()
{
	std::vector<int> V;

	V.push_back(10);
	V.push_back(20);
	V.push_back(30);


	// Test 1 ;
	// std::cout << "Vector elements : " ;
	// std::vector<int>::iterator it;
	// for ( it = V.begin(); it != V.end(); it++)
	// {
	// 	std::cout << " " << *it;
	// }

	// // or we can use the subscript operator ...
	// for (int  i = 0; i < 3; i++)
	// 	std::cout << " " << V[i] ;
	// std::cout << std::endl;

	// Test 2 : geting size
	// std::cout << "Vector size : " << V.size() << std::endl;

	// test 3 : accessing array elements ...
	// std::cout << V[0] << " " << V.at(0) << " " << V.front() << " " << V.back() << std::endl;


	// test 4 : empty array or not ??
	if(V.empty() == true)
		std::cout << "Empty vector .." << std::endl;
	else
		std::cout << "This vector is not empty .." << std::endl;


	// test 5 : let s use iterators ...


	// for (std::vector<int>::iterator it = V.begin(); it != V.end() ; it++)
	// 	std::cout << " " << *it;
	

	// std::cout << std::endl;


}
