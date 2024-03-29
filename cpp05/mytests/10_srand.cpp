



#include <stdlib.h>

//    void	 srand(unsigned) __swift_unavailable("Use arc4random instead.");



// The function srand() is used to seed the random number generator in C and C++.
// It's declared in the 

    //    <cstdlib> header in C++ 
	//    <stdlib.h> in C. 


#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime>   // for time()




// 1. **What is `rand()`?**
//    - `rand()` is a function provided by the C and C++ standard libraries, declared in `<cstdlib>` (or `<stdlib.h>` in C). It generates pseudo-random integers between 0 and `RAND_MAX`.

// 2. **Why do we need `rand()`?**
//    - `rand()` is used when you need random numbers in your program. These numbers are not truly random but rather generated by a deterministic algorithm. The sequence of numbers generated by `rand()` depends on the seed value set by `srand()`.

// 3. **Relation with `srand()`:**
//    - `srand()` is used to seed the random number generator. If you don't call `srand()`, the sequence of numbers generated by `rand()` will be the same every time you run your program because it defaults to a well-defined initial seed value. By calling `srand()` with a different seed (typically based on the current time), you ensure that the sequence of random numbers is different each time the program runs.
//    - The relationship is simple: `srand()` sets the initial state of the random number generator, and `rand()` generates subsequent pseudo-random numbers based on that state.

// So, in summary, `rand()` is used to generate random numbers in your program, and `srand()` is used to initialize the random number generator before using `rand()`. Together, they allow you to generate different sequences of random numbers in your program.





int main() {
    // Seed the random number generator using the current time
    // srand(static_cast<unsigned int>(time(NULL)));



	srand(100);// in this case every time you get the same list of numbers



    // Generate and print 5 random numbers
    for (int i = 0; i < 5; ++i) {
        std::cout << rand() << std::endl;
    }

    return 0;
}
