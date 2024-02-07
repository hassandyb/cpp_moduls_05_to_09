/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:05:09 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/07 19:52:25 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Canonical form : -----------------------

// Bureaucrat();Bureaucrat(const std::string & name, int grade);
// Bureaucrat(const Bureaucrat & other);
// Bureaucrat & operator=( const Bureaucrat & other);
// ~Bureaucrat();

// getters : -----------------------
std::string Bureaucrat::getName()
{
	return this->name;
}

int Bureaucrat::getGrade()
{
	return this->grade;
}



// Exceptions implimentaion: -----------------------

class	GradeTooHighException : public std::exception
{
	virtual const char * what() const throw()
	{
		return ("Exception : attempting to reach the highest grade occurred, please note that you highest grade you can get is one.");
	}
}

class	GradeTooLowException : public std::exception
{
	virtua const char * what() const throw()
	{
		return ("Exception : attempting to reach the lowest  grade occurred, please note that you lowest grade you can get is 150.");
	}
}


void Bureaucrat::incrementGrade()
{
	if(this->grade <= 0)
		throw (Bureaucrat::GradeTooHighException())
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if(this->grade >= 150)
		throw ( Bureaucrat::GradeTooLowException())
	this->grade++;
}




