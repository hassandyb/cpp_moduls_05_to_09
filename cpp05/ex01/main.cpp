/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/09 16:47:11 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
		Form test("JOHN", 44);
		std::cout << test << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	

}