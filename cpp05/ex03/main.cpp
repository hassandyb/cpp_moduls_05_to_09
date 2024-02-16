/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/16 16:05:35 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Bureaucrat Manager("Mr smith", 1);
	Intern John_Shaw;
	AForm *list_of_forms[4];// an array of pointers on AForm objects

	list_of_forms[0] = John_Shaw.makeForm("ShrubberyCreationForm", "Some_target"); 
	list_of_forms[1] = John_Shaw.makeForm("RobotomyRequestForm", "Some_target"); 
	list_of_forms[2] = John_Shaw.makeForm("UknownForm", "Some_target");
	list_of_forms[3] = John_Shaw.makeForm("PresidentialPardonForm", "Some_target");

	std::cout << std::endl << std::endl;
	
	//Signing forms ----
	for(int i = 0; i < 4; i++)
	{
		if(list_of_forms[i] != NULL)
			Manager.signForm(*list_of_forms[i]);
	
	}
	std::cout << std::endl;
	// executing forms ----
	for(int i = 0; i < 4; i++)
	{
		if(list_of_forms[i] != NULL)
		{
			Manager.executeForm(*list_of_forms[i]);
			std::cout << std::endl;
		}
			

	}
	
	//Freeing data ----
	for(int i = 0; i < 4; i++)
	{
		if(list_of_forms[i] != NULL)
			delete(list_of_forms[i]);

	}
}

