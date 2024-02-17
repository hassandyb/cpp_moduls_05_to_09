/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:13:10 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/17 12:45:53 by hed-dyb          ###   ########.fr       */
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
		std::cerr << "This form has not been signed yet!" << std::endl;
	
	
	else if(executor.getGrade() > this->getExecutegrade())
		throw AForm::GradeTooLowException();
	
	else
	{
		srand(time(NULL));
		
		if(rand() % 2 == 0)
			std::cout << "ZIIIIIIIIII! " << this->target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Robotomy Failed! " << this->target << " has not been robotomized." << std::endl;
	}
}






