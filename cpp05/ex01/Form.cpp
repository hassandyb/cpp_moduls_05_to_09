/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:10:18 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/10 16:54:08 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Canonical form -----------------------

Form::Form() : name("defaut name"), issigned(0), signgrade(150), executegrade(150) {}

Form::Form(const std::string & name, int s_g) : name(name), issigned(0), signgrade(s_g), executegrade(150)
{
	if(signgrade < 1)
		throw Form::GradeTooHighException();
	if(signgrade > 150)
		throw Form::GradeTooLowException();
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


std::ostream & operator<<(std::ostream & stream, const Form & form)
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



void Form::beSigned(const Bureaucrat & b)
{

	if(b.getGrade() <= this->getSigngrade())
	{
		this->issigned = true;
	}
	else
		throw Form::GradeTooLowException();
}


