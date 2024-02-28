


// Array.hpp


#include <iostream>
#include <stdexcept>

template<typename T>
class Array 
{
private:
    T* data;
    size_t size_;
public:
    Array() : data(nullptr), size_(0) {}
    
    Array(size_t size) : size_(size) 
	{
        data = new T[size];
    }

    // Destructor to free allocated memory
    ~Array() {
        delete[] data;
    }

    // Copy constructor
    Array(const Array& other) : size_(other.size_) {
        data = new T[size_];
        for (size_t i = 0; i < size_; ++i) {
            data[i] = other.data[i];
        }
    }

    // Assignment operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            size_ = other.size_;
            data = new T[size_];
            for (size_t i = 0; i < size_; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    // Subscript operator for element access
    T& operator[](size_t index) {
        if (index >= size_) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    // Member function to get the size of the array
    size_t size() const {
        return size_;
    }
};


// main.cpp
#include <iostream>


int main() 
{
    // Create an Array of integers with 5 elements
    Array<int> intArray(5);

    // Assign values to the elements using the subscript operator []
    for (size_t i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 10;
    }

    // Display the elements using the subscript operator []
    for (size_t i = 0; i < intArray.size(); ++i) {
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }

    // Accessing out of bounds index should throw an exception
    try {
        intArray[10] = 100; // This will throw an exception
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
