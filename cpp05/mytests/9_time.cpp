


#include <time.h>
#include <iostream>

//   time_t time(time_t *);


// The function time() is a part of the C Standard Library, 
// specifically declared in the


        //  <time.h> header in C 
		//  and <ctime> header in C++. 


// It is used to get the current calendar time as a time_t object, 
// which represents the number of seconds elapsed since the Unix epoch (00:00:00 UTC on January 1, 1970).



int main ()
{
	time_t value = time(NULL);
	std::cout << value << std::endl;
}