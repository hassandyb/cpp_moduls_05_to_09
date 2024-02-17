/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:58:58 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/17 12:39:12 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// Canonical Form : ------------------------------

Intern::Intern() {}

Intern::Intern(const Intern & other)
{
	(void) other;
}

Intern & Intern::operator=( const Intern & other)
{
	(void) other;
	return *this;
}

Intern::~Intern() {}

// Exercise requirement : ---------------------------------

typedef AForm *(*OUR_FORMS)(std::string target);


AForm *ft_create_Shrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm * ft_create_Robotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm * ft_create_PresidentialPardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm * Intern::makeForm(std::string form_name, std::string form_target)
{
	OUR_FORMS forms[3] = {&ft_create_Shrubbery, &ft_create_Robotomy, &ft_create_PresidentialPardon};
	std::string form_names_list [3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	
	int i = 0;
	while(i < 3)
	{
		if(form_names_list[i] == form_name)
		{
			std::cout << "Intern creates " << form_name << " form." << std::endl;
			return forms[i](form_target);
		}
			
		i++;
	}
	std::cout << "Intern did not create " << form_name << " form! because there is no template for that." << std::endl;
	return NULL; 
}


