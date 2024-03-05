



#include <iostream>
#include <queue>


int main ()
{
	std::queue<int> M;

	M.push(10);
	M.push(20);
	M.push(30);

	// std::cout << "Front elemnt of the queue : " << M.front() << std::endl;
	// M.pop();// 
	// M.pop();
	// std::cout << "Front elemnt of the queue after pop operation : " << M.front() << std::endl;

	// std::cout << M.size() << std::endl;


	if(M.empty() == true)
		std::cout << "empty" << std::endl;
	else
		std::cout << "not empty " << std::endl;
}


