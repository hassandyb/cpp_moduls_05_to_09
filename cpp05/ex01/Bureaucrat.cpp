/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:05:09 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/10 19:27:32 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Canonical form : -----------------------

Bureaucrat::Bureaucrat() : name("Default_name"), grade(150)
{

}

Bureaucrat::Bureaucrat( const std::string & name, int grade) : name(name), grade(grade)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat & other)
{
	*this = other;
}

Bureaucrat & Bureaucrat::operator=( const  Bureaucrat & other)
{
	if(this != &other)
	{
		this->name = other.getName();
		this->grade = other.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

// getters : -----------------------

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

// Implimenting what: -----------------------

 const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	
	return ("Exception : The highest grade a bureaucrat can get is one.");
}

 const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	
	return ("Exception : The lowest grade a bureaucrat can get is 150.");
}

// Increment/decrement ... -----------------------

void Bureaucrat::incrementGrade()
{

	if(this->grade -1 < 1 )
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if(this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

// operator << : ------------------------

std::ostream & operator<<(std::ostream & stream, const Bureaucrat & bc)
{
	stream << bc.getName() << ", bureaucrat grade " << bc.getGrade();
	return stream;
}

		

void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);// this bureaucrat tryes to sign the form
		//if success
		std::cout << (*this).getName() <<  " signed " << form.getName() << std::endl;
		
	}
	catch( Form::GradeTooLowException & e)
	{
		std::cout << (*this).getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

