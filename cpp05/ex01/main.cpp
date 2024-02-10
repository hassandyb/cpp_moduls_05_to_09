/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/10 17:18:20 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
		Bureaucrat bc("Manager", 45);
		Form form("Promotions list", 9);
		std::cout << form << std::endl;
		form.beSigned(bc);
		std::cout << form << std::endl;


		
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	

}