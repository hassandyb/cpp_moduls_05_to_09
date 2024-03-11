


#include <string>
#include <stack>
#include <iostream>
#include <sstream>

class RPN 
{
	private:
		std::stack<int> _stack;

		void processOperator(const std::string& op);
		void processOperand(const std::string& token);

	public:
		RPN() {};
		void run(std::string input);
};





void RPN::run(std::string input) 
{
    std::stringstream ss(input);
    std::string token;

    while (ss >> token) 
	{
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            processOperator(token);
        } 
		else 
		{
            processOperand(token);
        }
    }

    if (_stack.size() != 1) 
	{
        std::cerr << "Error: Too many operands\n";
        return;
    }

    std::cout << _stack.top() << std::endl;
}

void RPN::processOperator(const std::string& op) {
    if (_stack.size() < 2) {
        std::cerr << "Error: Not enough operands\n";
        return;
    }
    int b = _stack.top();
    _stack.pop();
    int a = _stack.top();
    _stack.pop();
    if (op == "+")
        _stack.push(a + b);
    else if (op == "-")
        _stack.push(a - b);
    else if (op == "*")
        _stack.push(a * b);
    else if (op == "/") {
        if (b == 0) {
            std::cerr << "Error: Division by zero\n";
            return;
        }
        _stack.push(a / b);
    }
}

void RPN::processOperand(const std::string& token) {
    try {
        _stack.push(std::stoi(token));
    } 
	catch (const std::exception& e) {
        std::cerr << "Error: Invalid token \"" << token << "\"\n";
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "check atgs" << std::endl;
        return 1;
    }

    RPN rpn;
    rpn.run(av[1]);

    return 0;
}

