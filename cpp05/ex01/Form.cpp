/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:10:18 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/09 15:27:34 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Canonical form -----------------------
Form::Form() : name("defaut name"), issigned(0), signgrade(150), executegrade(150) {}

Form::Form(const std::string & name, int s_g, int e_g) : name(name), issigned(0), signgrade(s_g), executegrade(e_g)
{
	// if(signgrade < 1|| executegrade < 1)
	// 	throw Form::GradeTooHighException();
	// if(signgrade > 150 ||executegrade > 150)
	// 	throw Form::GradeTooHighException();
}

Form::Form(const Form & other) : name(other.getName()), signgrade(other.getSigngrade()), executegrade(other.getExecutegrade())
{

	this->issigned = other.getIssigned();
}

Form & Form::operator=(const Form & other)
{
	if(this != &other)
	{
		this->issigned = other.getIssigned();
	}
	return *this;
}

Form::~Form() {}

// getters ----------------------------

std::string Form::getName() const
{
	return this->name;
}

bool		Form::getIssigned() const
{
	return this->issigned;
}

int			Form::getSigngrade() const
{
	return this->signgrade;
}

int			Form::getExecutegrade() const
{
	return this->executegrade;
}











