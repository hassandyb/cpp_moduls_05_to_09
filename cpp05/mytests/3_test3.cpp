

#include <iostream>
#include <stdexcept>


//     example 1 -------------------------------------


// void examplefunction()
// {
// 	throw std::runtime_error("An error occurred!");





// 	// you can also use :
// 	// std::logic_error:  you can use it in case to dividing by zero fro example
// 	// std::invalid_argument: when a function recieved invalid argument
// 	// std::out_of_range
// 	//std::domain_error:
// 	// std::length_error
// }

// int main ()
// {
// 	try 
// 	{
// 		examplefunction();

// 	}
// 	catch(const std::exception & e)
// 	{
// 		std::cerr << "Caught exception: " << e.what() << std::endl;
// 	}
// 	return 0;
// }

//    example 2 ----------------------------------------


// class MyException : public std::exception {
// public:
	
// 	// virtual const char* what() const noexcept;
//     // virtual const char* what() const noexcept;
// 	virtual const char* what() const _NOEXCEPT 	
// 	{
//         return "My custom exception occurred!";
//     }
// };

// void exampleFunction() 
// {
//     throw MyException();
// }

// int main() 
// {
//     try 
// 	{
//         exampleFunction();
//     } 
// 	catch (const std::exception& e) // why & ==> When you catch an exception by reference to std::exception, you can use the what() function to retrieve a human-readable error message associated with the exception.
// 	{
//         std::cerr << "Caught exception: " << e.what() << std::endl;
//     }
//     return 0;
// }






