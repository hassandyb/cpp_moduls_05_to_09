/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:10:18 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/13 16:12:11 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Canonical form -----------------------

AForm::AForm() : name("Defaut_Form"), issigned(false), signgrade(150), executegrade(150) {}

AForm::AForm(const std::string & name, int s_g, int e_g) : name(name), issigned(false), signgrade(s_g), executegrade(e_g)
{
	if(signgrade < 1)
		throw AForm::GradeTooHighException();
	if(signgrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm & other) : name(other.getName()), issigned(other.getIssigned()), signgrade(other.getSigngrade()), executegrade(other.getExecutegrade()) {}

AForm & AForm::operator=(const AForm & other)
{

	if(this != &other)
		this->issigned = other.issigned;
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


