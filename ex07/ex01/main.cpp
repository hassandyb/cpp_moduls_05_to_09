/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:48:14 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/28 11:23:50 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



template <typename  parameter>

void ft_print(parameter & input)
{
	std::cout << input << std::endl;
}



int main ()
{
	// Example 1 : testing with an array of ints :
	
	// int A[] = {1, 2, 3, 4, 5, 6};
	// int len = sizeof(A) / sizeof(int);
	// iter(A, len, &ft_print<int>);
	

	// Example 2 : Array of char :
	
	char A[] = {'a', 'b', 'c' , 'd' , 'e'};
	int len = sizeof(A) / sizeof(char);
	iter(A, len, &ft_print<char>);
	
}








