

#include <iostream>
class Base {
public:
    Base() {}
     ~Base() {
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {}
    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr; // Without virtual destructor in Base, only Base destructor would be called
    return 0;
}
