


// static_cast is a casting operator in C++ that is primarily used for explicit type conversions. It is safe and performs compile-time checks to ensure type safety. You typically use static_cast when you know that the conversion is safe and well-defined.

#include <iostream>

// Numeric Conversions   ##############################################################
void numericConversions()
{
	double nbr = 3.14;
	int i = static_cast<int>(nbr);
	std::cout << "Double : " << nbr << "  -> Int : " << i << std::endl;
}

// Pointer Conversions   ##############################################################
class Base 
{
	public :
		virtual ~Base() {}
};
class Derived : public Base
{
	public :
		void print() 
		{
        std::cout << "Derived class method" << std::endl;
		}
};
void pointerConversions()
{
	Base *basePtr = new Derived();



	// you can assign derived poiter  to upcasting derived poiter.
	// Derived *derivedPtr = basePtr;

	Derived *derivedPtr = static_cast<Derived*>(basePtr);



	derivedPtr->print();
	delete basePtr;
}



// Arithmetic Conversions ##############################################################

// 1. In the line `int result = static_cast<int>(a + b);`:
//    - You're explicitly telling the compiler to convert the result of `a + b` to an `int`. You're saying, "Take whatever result `a + b` gives and convert it to an `int` before assigning it to `result`."

// 2. In the line `int result = a + b;`:
//    - The compiler sees that `result` is an `int`, so it automatically converts the result of `a + b` to an `int` before assigning it to `result`. It's like the compiler assumes you want the result as an `int` because `result` is declared as such.

// So, in both cases, the arithmetic operation is performed (`a + b`), but in the first case, you're explicitly instructing the compiler to convert the result to an `int`, while in the second case, the compiler does this conversion automatically based on the type of `result`.

void arithmeticConversions ()
{
	int a = 10;
	double b = 3.5;

	// int result = a + b;

	//This casting instructs the compiler to convert the result to an integer type, 
	int  result = static_cast<int>(a + b);


	std::cout << "Resault of arithmetic conversion: " << result << std::endl;
}



// Enum Conversions   ##############################################################

enum class MyEnum {value1, value2};

void enumConversions()
{
	// Casting : value2 from type MyEnum to an integer (int).
	
	int value = static_cast<int>(MyEnum::value1);



	std::cout << "Enum conversion : " << value << std::endl;
}




// // Explicit Constructor Calls   ###################################################

class Myclass
{
	private :
		int value;
	public :

		explicit Myclass (int value) : value(value) {}
		int getValue() const {return this->value; }
};

void constructorCalls()
{
	Myclass obj1 = static_cast<Myclass>(42);
	Myclass obj2(42);
	std::cout << "Explicit constructor call : " << obj1.getValue() << std::endl;
	std::cout << "Explicit constructor call : " << obj2.getValue()<< std::endl;
}

int main ()
{
	// numericConversions();
	// pointerConversions();

	// arithmeticConversions();

	// enumConversions();
	constructorCalls();
}