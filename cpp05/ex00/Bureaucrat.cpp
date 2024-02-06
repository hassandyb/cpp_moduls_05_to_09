/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:05:09 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/06 18:53:21 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"




std::string Bureaucrat::getName()
{
	return this->name;
}

int Bureaucrat::getGrade()
{
	return this->grade;
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




