/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/11 16:03:46 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AForm.hpp"


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
		AForm form("Promotion Form", 5);
		bc.signForm(form);

	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	

}