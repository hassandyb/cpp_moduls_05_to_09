/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:47:31 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/23 14:33:27 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

double strtod(const char* str, char** endptr);

int main (int ac, char **av) 
{

	if(ac == 2)
	{
		std::string input(av[1]);
		ScalarConverter::convert(input);
		return (0);
	}
	else
		std::cerr << "Error : Check args!" << std::endl;
	return (1);
}

