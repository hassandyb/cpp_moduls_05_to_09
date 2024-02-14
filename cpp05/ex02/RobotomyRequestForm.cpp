/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:13:10 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/14 15:02:49 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Canonical Form : ---------------------------


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Default_target") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) : AForm(other)
{
	this->target = other.target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
	if(this != &other)
	{
		this->target = other.target;
		AForm::operator=(other);
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

// The rest : ---------------------------


std::string RobotomyRequestForm::getTarget()
{
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(this->getIssigned() == false)
		throw AForm::NotSignedException();
	if(executor.getGrade() > this->getExecutegrade())
		throw GradeTooLowException();
	
}






