

// exampel 1 : Downcasting casting    ###############################################################

// #include <iostream>


// class Base 
// {
// 	public:
// 		virtual ~Base() {} // virtual destructor for polymorphic behavior
// };

// class Derived : public Base 
// {
// 	public:
// 		void derivedFunction() 
// 		{
// 			std::cout << "Function specific to Derived class\n";
// 		}
// };

// int main() 
// {
//     Base* basePtr = new Derived(); // Create a Derived object and assign its address to a Base pointer

//     // Attempt to downcast from Base pointer to Derived pointer using dynamic_cast
//     Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

//     if (derivedPtr) 
// 	{
//         // If downcast successful, call function specific to Derived class
//         derivedPtr->derivedFunction();
//     } else 
// 	{
//         std::cout << "Downcast failed.\n";
//     }

//     delete basePtr; // Remember to deallocate memory

//     return 0;
// }

// 2. Type Checking: #########################################################################


 

#include <iostream>
#include <typeinfo>

class Base 
{
    public:
        virtual ~Base() {} // virtual destructor for polymorphic behavior
};

class Derived : public Base 
{
    public:
        void derivedFunction()
        {
            std::cout << "Function specific to Derived class\n";
        }
};

int main() 
{
    Base* basePtr = new Base(); 

    
    // Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    Derived* derivedPtr = static_cast<Derived*>(basePtr);
    if (derivedPtr) 
    {
        derivedPtr->derivedFunction();
    } else 
    {
        std::cout << "Downcast failed.\n";
    }

    delete basePtr;

    return 0;
}





