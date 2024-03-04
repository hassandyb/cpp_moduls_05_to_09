/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:36:49 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/04 16:05:59 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Canonical form : -------------------

Span::Span() : N(0), numbers(std::vector<int>()) {};

Span::Span(unsigned int N) : N(N), numbers(std::vector<int>()) {};

Span::Span(const Span & other) : N(other.N), numbers(other.numbers) {};

const Span & Span::operator=(const Span & other)
{
	if(this != &other)
	{
		this->N = other.N;
		this->numbers = other.numbers;
	}
	return *this;
}

Span::~Span() {};


// Getters : ---------------------

unsigned int Span::getN()  const
{
	return this->N;
}

std::vector<int> Span::getNumbers() const
{
	return this->numbers;
}

// Exercise requirements : ----------------

void Span::addNumber(int value)
{
	unsigned int size = (this->numbers).size();
	if(size >= this->N)
		throw std::out_of_range("Error : Span is full");
	numbers.push_back(value);
}


unsigned int Span::shortestSpan() const
{
	if((this->numbers).size() <= 1)
		throw std::out_of_range("Error : span is empty or containes only one element");
	
	std::vector<int> copy;
	copy = this->numbers;
	int delta = 0;
	int save = 0;

	sort(copy.begin(), copy.end());
	
	std::vector<int>::iterator it;

	for (it = copy.begin(); it != copy.end() - 1; it++)
	{
		if(it == copy.begin())
			save = *(std::next(it)) - *it;
		delta = *(std::next(it)) - *it;
		if(delta < save)
			save = delta;
		if(std::next(it) == copy.end())
			break;
	}

	return static_cast<unsigned int>(save);
};

unsigned int Span::longestSpan() const
{
	if((this->numbers).size() <= 1)
		throw std::out_of_range("Error : span is empty or containes only one element");
		
	unsigned int min = *std::min_element(this->numbers.begin(), this->numbers.end());
	unsigned int max = *std::max_element(this->numbers.begin(), this->numbers.end());
	return (max - min);
}

void Span::ft_add_range(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end)
{
	unsigned int total = this->numbers.size() + (it_end - it_begin);
	if(total <= this->N)
		this->numbers.insert(this->numbers.end(), it_begin, it_end);
	else
		throw std::out_of_range("Error : cant add this range!");
	
}



