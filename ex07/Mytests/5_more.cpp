

#include <iostream>
#include <stdexcept>




template <typename T>


class Array
{
	private :
		T *Data;
		size_t size;
	public :
		Array() : Data (NULL), size(0) {};
		Array (size_t size) : size(size) { Data = new T[size];};
		Array(const Array & other)
		{
			this->size = other.size;
			Data = new T[size];
			for(int i = 0; i < size ; i++)
			{
				Data[i] = other.Data[i];
			}
			
		};
		Array & operator=(const Array & other )
		{
			if (this != &other )
			{
				delete[] Data;
				this->size = other.size;
				this->Data = new T[this->size];
				for(int i = 0; i < this->size; i++)
				{
					this->Data[i] = other.Data[i];
				}
			}
			return *this;
		};

		size_t getSize() { return this->size; }

};


int main ()
{
	//TEST 1 : Test default constructor

    // Array<int> arr1;
	// std::cout << "Size of arr1: " << arr1.getSize() << std::endl; // Should print 0

    // Test 2 : test the parametrized constructor 
	// Array<float> arr1(25);
	// const size_t size = 25;
	// std::cout << "Size of arr1: " << arr1.getSize() << std::endl; // Should print 0


	// Test 3 : testing copy constructor
	// Array<int> Arr1(15);
	// Array<int> Arr2(Arr1);
	// std::cout << Arr2.getSize() << std::endl;

	// Test 4 : testing assignemnt operator :

	Array<int> arr1(13);
	Array<int> arr2(55);
	arr1 = arr2;
	std::cout << arr1.getSize() << " " << arr2.getSize() << std::endl;




	
}