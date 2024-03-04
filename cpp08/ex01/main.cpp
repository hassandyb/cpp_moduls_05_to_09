/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:36:06 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/04 16:11:26 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void ft_print_all(Span & S1, Span & S2,Span & S3) 
{

	std::cout << S1.getN() << " | " << (S1.getNumbers()).size()<< std::endl;
	std::cout << S2.getN() << " | " << (S2.getNumbers()).size() << std::endl;
	std::cout << S3.getN() << " | " << (S3.getNumbers()).size() << std::endl;
}




int main ()
{
	// test 1 : canonical form ...
	
	Span S1(88);
	S1.addNumber(1);
	S1.addNumber(2);
	S1.addNumber(3);
	Span S2(S1);
	Span S3;
	S3 = S2;
	ft_print_all(S1, S2, S3);

	// Test 2 : addNumber function ...
	
	// Span S(5);
	// try
	// {

	// 	S.addNumber(6);
	// 	S.addNumber(3);
	// 	S.addNumber(17);
	// 	S.addNumber(9);
	// 	S.addNumber(11);
	// 	// S.addNumber(641);

	// 	std::cout << S.shortestSpan() <<  std::endl;
	// 	std::cout << S.longestSpan() << std::endl;

	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	
	// Test 3 : ft_add_range() function ... 
	
	// try
	// {
	// 	Span S(4);
	// 	std::vector<int> V;
		
	// 	S.addNumber(6);
	// 	S.addNumber(3);
	// 	S.addNumber(17);
	// 	V.push_back(9);
	// 	V.push_back(11);
	// 	S.ft_add_range(V.begin(), V.end());
	// 	std::cout << S.shortestSpan() <<  std::endl;
	// 	std::cout << S.longestSpan() << std::endl;
	// }
	// catch(std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }


}