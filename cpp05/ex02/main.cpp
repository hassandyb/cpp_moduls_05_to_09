/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/16 11:02:37 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main ()
{
	try
	{
		// Form functions : -----------------------
		// Bureaucrat B("Manager", 5);
		
		// ShrubberyCreationForm F("The_target");
		// RobotomyRequestForm F("The_target");
		// PresidentialPardonForm F("Thetarget");

		// F.beSigned(B);
		// F.execute(B);
		
		
		// Form functions : -----------------------
		Bureaucrat B("Manager", -14);
		
		// ShrubberyCreationForm F("The_target");
		// RobotomyRequestForm F("The_target");
		PresidentialPardonForm F("Thetarget");

		// B.signForm(F);
		B.executeForm(F);
		

	}
	catch(const std::exception& e)
	{

		std::cout  << e.what() << std::endl;
	}
	
}

