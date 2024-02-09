/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:10:18 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/09 14:19:49 by hed-dyb          ###   ########.fr       */
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

Form::Form(const Form & other)
{
	*this = other;
}
Form & Form::operator=(const Form & other)
{
	if(this != &other)
	{
		// this->name = other->name;// create the getter cause they are private....
		// this->signed = other->signed;
		// this->signgrade = other->signgrade;
		// this->executegrade = other->executegrade;
	}
	return *this;
}

Form::~Form() {}













