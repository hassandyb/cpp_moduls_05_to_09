


// In C++, you can create templates that take more than one type parameter. 
// This allows you to create functions or classes that are parameterized by multiple types.




// example 1 : Function Template with Two Type Parameters:


// #include <iostream>

// template <typename T1, typename T2>

// void printPair(T1 first, T2 second) 

// {
//     std::cout << "(" << first << ", " << second << ")" << std::endl;
// }

// int main() 
// {
//     printPair<int, double>(5, 3.14);
//     printPair<std::string, char>("Hello", '!');
//     return 0;
// }

// example 2 : Class Template with Two Type Parameters:




#include <iostream>

template <typename T1, typename T2>
class Pair 
{
	private:
		T1 first;
		T2 second;
	public:
		Pair(T1 f, T2 s) : first(f), second(s) {}
		void print() 
		{
			std::cout << "(" << first << ", " << second << ")" << std::endl;
		}
};

int main() 
{
    Pair<int, double> p1(5, 3.14);
    p1.print();
    
    Pair<std::string, char> p2("Hello", '!');
    p2.print();
    
    return 0;
}





