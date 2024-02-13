/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:16:05 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/13 16:14:53 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Canonical Form : ---------------------------

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("Default_target") {}


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : AForm(other)
{
	this->target = other.target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other)
{
	if(this != &other)
	{
		this->target = other.target;
		AForm::operator=(other);
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}


// The rest : ---------------------------



std::string PresidentialPardonForm::getTarget()
{
	return this->target;
}


