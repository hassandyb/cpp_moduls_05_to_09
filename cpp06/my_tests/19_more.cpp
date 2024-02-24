

#include <iostream>

class A
{
	public :
		int a;
};

class B
{
	public :
		int b;

};

int main ()
{
	A *a_ptr = new A();
	B *b_ptr = new B();

	a_ptr = reinterpret_cast<A *>(b_ptr);// possinle 

	// not possible 
	// a_ptr = static_cast<A *>(b_ptr);
	// a_ptr = dynamic_cast<A *>(b_ptr);

	delete a_ptr;
	delete b_ptr;

}