/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:09:27 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/11 14:43:49 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Canonical form : ------------------------
RPN::RPN() {};

RPN::RPN(const RPN & other) : _stack(other._stack) {};

RPN & RPN::operator=(const RPN & other)
{
	if(this != &other)
	{
		this->_stack = other._stack;
	}
	return *this;
};

RPN::~RPN() {};

// Exercise requrements : ------------------------

void ft_error(std::string msg)
{
	std::cerr << "Error : " << msg << std::endl;
	exit (1);
}
bool ft_allowed_chars_only(std::string & str)
{
	int len = str.length();
	for(int i = 0; i < len; i++)
	{
		if(std::isdigit(str.at(i)) == true)
			continue;
		if(str.at(i) == ' ')
			continue;
		if(str.at(i) == '+' || str.at(i) == '-' || str.at(i) == '*' || str.at(i) == '/')
			continue;
		return false;		
	}
	return true;
}

bool ft_its_a_number(std::string & element)
{
	if(element.length() == 1 && std::isdigit(element.at(0)) == true)
		return true;
	return false;
}

void RPN::ft_process_number(std::string & element)
{
	std::istringstream iss(element);
	int nbr;
	iss >> nbr;
	this->_stack.push(nbr);

}

bool ft_its_an_operation(std::string & element)
{
	if(element == "+" || element == "-")
		return true;
	if(element == "*" || element == "/")
		return true;
	return false;
}

void RPN::ft_process_operation(std::string & element)
{
	if((this->_stack).size() >= 2)
	{
		int b = this->_stack.top();
		this->_stack.pop();
		int a = this->_stack.top();
		this->_stack.pop();
		
		if(element == "+")
			this->_stack.push(a + b);
		if(element == "-")
			this->_stack.push(a - b);
		if(element == "*")
			this->_stack.push(a * b);
		if(element == "/")
		{
			if(b == 0)
				ft_error("We can't divide by zero.");
			this->_stack.push(a / b);
		}
	}
	else
		ft_error("Too many operations, some numbers is missing, ...");

}

void RPN::start(std::string str)
{
	std::istringstream iss(str);
	std::string element;
	
	if(ft_allowed_chars_only(str) == false)
	{
		std::cerr << "Error : Allowed chars : 0123456789 +-*/" << std::endl;
		exit (1); 
	}
	while(iss >> element)
	{
		if(ft_its_a_number(element) == true)
		{
			ft_process_number(element);
		}
		else if(ft_its_an_operation(element) == true)
		{
			ft_process_operation(element);
		}
		else
			ft_error("Hint... try to separate numbers and operations with spaces.");
	}
	if(this->_stack.size() > 1)
		ft_error("Too many numbers, some operations are missing.");
		
	std::cout << this->_stack.top() << std::endl;
}



