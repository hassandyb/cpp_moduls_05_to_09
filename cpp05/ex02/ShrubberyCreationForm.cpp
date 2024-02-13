/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:11:22 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/13 13:23:51 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Canonical Form : ---------------------------

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145, 137), target("Default_target") {}
	
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : AForm(other)
{
	this->target = other.target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
	if(this != &other)
	{
		this->target = other.target;
		AForm::operator=(other);
	}	
		
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}




// Other : ---------------------------

std::string ShrubberyCreationForm::getTarget()
{
	return this->target;
}


