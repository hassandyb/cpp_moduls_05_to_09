/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:11:22 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/14 14:57:32 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Canonical Form : ---------------------------

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145, 137), target("Default_target") {}
	
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : AForm(other)
{
	this->target = other.target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{	
	if(this != &other)
	{
		this->target = other.target;
		AForm::operator=(other);
	}	
		
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


// The rest : ---------------------------

std::string ShrubberyCreationForm::getTarget()
{
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(this->getIssigned() == false)
		throw AForm::NotSignedException();
	
	if (executor.getGrade() > this->getExecutegrade())//
		throw AForm::GradeTooLowException();
	
	std::ofstream outputfile(this->target + "_shrubbery");
	
	if(outputfile.is_open())
	{
    		outputfile	<< "\n";
    		outputfile	<< "\n";
            outputfile	<< "                                .\n";
            outputfile	<< "                         .         ;  \n";
            outputfile	<< "                 .              .     ;\n";
            outputfile	<< "                    ,           ,    ;\n";
            outputfile	<< "                      :         ;   ;\n";
            outputfile	<< " .                  %;     %; ;  ;%\n";
            outputfile	<< "   ;                 ;%;  %%;  ;%;\n";
            outputfile	<< "     %;              %;%;  ;%;  ;%\n";
            outputfile	<< "       ;%;           ;%;  ;%;   %;\n";
            outputfile	<< "         ;%;         ;%;   ;%;  ;%\n";
            outputfile	<< "           ;%;      ;%;    ;%; ;%\n";
            outputfile	<< "             ;%%.   ;%;     ;%%,;\n";
            outputfile	<< "               ;%%;;%;      ;%%%%\n";
            outputfile	<< "                 %%%%        %%%%,\n";
            outputfile	<< "                  %%%%      %%%%\n";
            outputfile	<< "                   %%%%    %%%%\n";
            outputfile	<< "                    %%%%  %%%%\n";
            outputfile	<< "                     %%%%%%%%\n";
            outputfile	<< "                    %%%%%%%%%%\n";
            outputfile	<< "                   %%%%%%%%%%%%\n";
            outputfile	<< "                      %%%%%%\n";
		outputfile.close();
	}
	else
		std::cerr << "Error: Unable to open ";

}


