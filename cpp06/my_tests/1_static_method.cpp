

#include <iostream>

class Example {
public:
    // Non-static method
    void non_static_method() 
    {
        std::cout << "Non-static method called" << std::endl;
    }

    // Static method
    static void static_method()
     {
        std::cout << "Static method called" << std::endl;
    }
};

int main() {
    // Creating an instance of the class
    Example obj;

    // Calling the non-static method using the object
    obj.non_static_method();  // Output: "Non-static method called"

    // Calling the static method directly using the class name
    Example::static_method(); // Output: "Static method called"

    return 0;
}
