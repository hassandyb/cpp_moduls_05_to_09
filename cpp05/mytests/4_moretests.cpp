


#include <iostream>



// predefined exception classes 


// 	// std::logic_error:  you can use it in case to dividing by zero fro example
	// std::invalid_argument: when a function recieved invalid argument
	// std::out_of_range
	//std::domain_error:
	// std::length_error
	// std::runtime_error


// void	ft_function_system_error_classes()
// {
// 	throw std::runtime_error("An error has occured!");
// }
// int main ()
// {
// 	try 
// 	{
// 		ft_function_system_error_classes();
// 	}
// 	catch( std::exception & e)// // what happnes when i get it without reference : When you catch an exception by value (std::exception e), you are making a copy of the exception object. This slicing process means that only the base class part of the exception object is retained, losing the derived class information (like the error message).
// 	{
// 		std::cout << "Caught exception : " << e.what() << std::endl;
// 	}
// }



// Example -----------------------------------------

class Myexception : public std::exception 
{

	public :
		 const char * error;

		virtual const char * what() const throw()
		{
			
			return this->error;
		}
		Myexception(const std::string er)
		{
			std::cout << "parametrized constructor called" << std::endl;

			this->error = er.c_str();
		}

};

void ft_exception_class_case()
{
	// throw Myexception();
	throw Myexception("My custom exception .. meaning any error i wanna customize...\n");
}

int main ()
{
	try 
	{
		ft_exception_class_case();
	}
	catch (std::exception & e)
	{
		std::cout << "Caught exception : " << e.what() << std::endl; 
		// make the defalt what function works but comenting the overrded implimentaion of what 
	}
}








