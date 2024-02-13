/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/13 14:46:34 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Form.hpp"


// circular dependency 

int main ()
{
	try
	{
		// Bureaucrat bc("The Manager", 1);
		// Form form("Promotions Form", 45);
		// std::cout << form << std::endl;
		// form.beSigned(bc);
		// std::cout << form << std::endl;

		
		Bureaucrat bc("The Manager", 123);
		Form form("Promotion Form", 5, 5);
		bc.signForm(form);

	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	

}