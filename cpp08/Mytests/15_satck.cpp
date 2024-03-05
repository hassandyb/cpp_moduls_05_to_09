#include <iostream>
#include <stack>
#include <vector>
#include <deque>

int main() 
{
    // Define a stack with vector as its underlying container
    std::stack<int, std::vector<int> > S;
    // std::stack D;
    // Push elements onto the stack
    S.push(1);
    S.push(2);
    S.push(3);


    // std::deque<int> D;

    // D.push_back(10);
    // D.push_back(20);
    // D.push_back(30);

    // std::deque<int>::iterator it;

    // for(it = D.begin(); it != D.end(); it++)
    //     std::cout << *it << std::endl;
    

    return 0;
}
