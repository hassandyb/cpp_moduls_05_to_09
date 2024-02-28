





#include <iostream>

// Class template for a generic pair
template<typename T>

class Pair 
{
	private:
		T first;
		T second;
	public:
		Pair(T a, T b) : first(a), second(b) {}
		T getFirst() { return first; }
		T getSecond() { return second; }
};

int main() 
{

    // Pair<int> pair1(5, 10);
    // std::cout << "First value: " << pair1.getFirst() << ", Second value: " << pair1.getSecond() << std::endl;


    Pair<int> pair2(3.5, 7.2);
    std::cout << "First value: " << pair2.getFirst() << ", Second value: " << pair2.getSecond() << std::endl;

    return 0;
}


