/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:37:04 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/04 15:33:06 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP



#include <iostream>
#include <vector>
#include <list>


class Span
{
	private :
		unsigned int N;
		std::vector<int> numbers;
		

	public :
		// canonical form ...
		Span();
		Span(unsigned int N);
		Span(const Span & other);
		const Span &  operator=(const Span & other);
		~Span();
		
		// getters ----------
		unsigned int getN() const; 
		std::vector<int> getNumbers() const;
		
		void addNumber(int value);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		void ft_add_range(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end);

		

		

	
};





#endif

