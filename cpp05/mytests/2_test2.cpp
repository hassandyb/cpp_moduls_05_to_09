
#include <iostream>




int main ()
{
	int y = 5;
	try
	{
		
		if(y == 123)
			throw 123;
		if(y == 789)
			throw 789;
		if(y == 44)
			throw 44;
		throw 0;

	}
	catch (int a)
	{
		std::cout << "a = " << a << ", and y = " << y << std::endl;
	}
}


