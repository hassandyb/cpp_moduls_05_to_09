






// Example 1 : case of temaple ......
// #include <iostream>

// template<typename T, int size>
// class Array 
// {
// 	private:
// 		T elements[size];
// 	public:
// 		T& operator[](int index) 
// 		{
// 			if (index < 0 || index >= size) 
// 			{
// 				std::cerr << "Index out of bounds!" << std::endl;
// 				exit(1);
// 			}
// 			return elements[index];
// 		}
// };

// int main() 
// {
//     Array<int, 5> arr;

//     // Fill the array
//     for (int i = 0; i < 5; ++i) {
//         arr[i] = i * 10;
//     }

//     // Access and print array elements
//     for (int i = 0; i < 5; ++i) {
//         std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
//     }

//     return 0;
// }


// Example 2 : case of normal calss ...........




#include <iostream>

class MyClass 
{
	private:
		int data[5];
	public:
		int& operator[](int index) {
			if (index < 0 || index >= 5) {
				std::cerr << "Index out of bounds!" << std::endl;
				// exit(1);
			}
			return data[index];
		}
};

int main() 
{
    MyClass obj;

    // Fill the array
    for (int i = 0; i < 5; ++i) 
	{
        obj[i] = i * 10;
    }

    // Access and print array elements
    for (int i = 0; i < 7; ++i) 
	{
        std::cout << "obj[" << i << "] = " << obj[i] << std::endl;
    }

    return 0;
}










