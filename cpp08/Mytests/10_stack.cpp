

#include <iostream>
#include <stack>



int main ()
{
	std::stack<int> S;

	S.push(10);
	S.push(20);
	S.push(30);

	// test one the top elemnt of the stack...
	// std::cout << S.top() << std::endl;
	// the sise and it if it empty 

	std::cout << "Size : " <<  S.size() << "\nEmpty or not : " << S.empty() << std::endl;
}