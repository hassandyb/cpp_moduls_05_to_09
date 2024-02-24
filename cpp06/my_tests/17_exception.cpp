
#include <iostream>


int main ()
{

{
	try 
	{

		std::cout << "111111" << std::endl;

	}
	catch (std::exception &)
	{
		try
		{

			std::cout << "2222222222" << std::endl;

		}
		catch(std::exception &)
		{
			try 
			{

				std::cout << "33333333333" << std::endl;

			}
			catch (std::exception &)
			{
				std::cout << "exeption ........." << std::endl;
			}

		}
	}
	
}
}