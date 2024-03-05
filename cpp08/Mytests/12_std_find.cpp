

#include <iostream>
#include <vector>
#include <algorithm>


// find(_InputIterator __first, _InputIterator __last, const _Tp& __value_)
// {
//     for (; __first != __last; ++__first)
//         if (*__first == __value_)
//             break;
//     return __first;
// }



// The `std::find` algorithm function takes the following parameters:

// 1. `__first`: This parameter represents the iterator pointing to the beginning of the sequence to be searched.

// 2. `__last`: This parameter represents the iterator pointing to the end of the sequence to be searched. Note that the element pointed to by `__last` is not included in the search.

// 3. `__value_`: This parameter represents the value that the algorithm is searching for within the sequence.

// The function searches the range defined by the iterators `__first` and `__last` for the first occurrence of the value `__value_`. It returns an iterator to the first occurrence of `__value_` within the range, or `__last` if the value is not found.

// Here's a brief overview of each parameter:

// - `_InputIterator`: This is a placeholder for the type of iterator used to iterate through the sequence. It can be any type of input iterator, such as `std::vector<int>::iterator`, `std::list<int>::iterator`, etc.

// - `_Tp`: This represents the type of the value being searched for. It can be any type that supports comparison with the elements in the sequence.

// - `__value_`: This is the value being searched for within the sequence.

// - `__first`: Iterator pointing to the beginning of the sequence to be searched.

// - `__last`: Iterator pointing to the end of the sequence to be searched (exclusive).




int main ()
{
	std::vector<int> V;

	V.push_back(10);// indice 0
	V.push_back(20);
	V.push_back(90);
	V.push_back(40);

	std::vector<int>::iterator it = std::find(V.begin(), V.end(), 30);

	if(it != V.end())
		std::cout << " 30 excist at this andice : " << (it - V.begin()) << std::endl;
	else
		std::cout << " 30 is not found .." << std::endl;

}