/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:10:18 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/12 17:13:58 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Canonical form -----------------------

AForm::AForm() : name("defaut name"), target("default target"), issigned(0), signgrade(150), executegrade(150) {}

AForm::AForm(const std::string & name, std::string target, int s_g, int e_g) : name(name), target(target), issigned(0), signgrade(s_g), executegrade(e_g)
{
	if(signgrade < 1)
		throw AForm::GradeTooHighException();
	if(signgrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm & other) : name(other.getName()), target(other.getTarget()), signgrade(other.getSigngrade()), executegrade(other.getExecutegrade())
{

	this->issigned = other.getIssigned();
}

AForm & AForm::operator=(const AForm & other)
{
	if(this != &other)
	{
		this->issigned = other.getIssigned();
	}
	return *this;
}

AForm::~AForm() {}

// getters ----------------------------

std::string AForm::getName() const
{
	return this->name;
}

bool		AForm::getIssigned() const
{
	return this->issigned;
}

int			AForm::getSigngrade() const
{
	return this->signgrade;
}

int			AForm::getExecutegrade() const
{
	return this->executegrade;
}

std::string AForm::getTarget() const
{
	return this->target;
}

std::ostream & operator<<(std::ostream & stream, const AForm & form)
{

	stream << "Form Name       : " << form.getName() << std::endl ;
	stream << "Form Status     : ";
	if(form.getIssigned() == true)
		stream << "Signed" << std::endl;
	else
		stream << "Unsigned" << std::endl;
	stream << "Siging grade    : " << form.getSigngrade() << std::endl;
	stream << "Executing grade : " << form.getExecutegrade() << std::endl;

	return stream;
}


void AForm::beSigned(const Bureaucrat & b)
{

	if(b.getGrade() <= this->getSigngrade())
	{
		this->issigned = true;
	}
	else
		throw AForm::GradeTooLowException();
}


