/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:11:22 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/12 17:33:46 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {}

		
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", target, 145, 137) {}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : AForm(other) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
	(void) other;
	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}


		