/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/13 16:16:09 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main ()
{
	Bureaucrat B("b", 1);
	

	PresidentialPardonForm t1;
	PresidentialPardonForm t2("New_target");
	
	std::cout << t1.getName() << " " << t1.getIssigned() << " " << t1.getSigngrade() << " " << t1.getExecutegrade() << " " << t1.getTarget() << std::endl;
	std::cout << t2.getName() << " " << t2.getIssigned() << " " << t2.getSigngrade() << " " << t2.getExecutegrade() << " " << t2.getTarget() << std::endl;
	
	std::cout << std::endl << std::endl;
	t1 = t2;
	t1.beSigned(B);
	t2.beSigned(B);
	std::cout << std::endl << std::endl;
	
	std::cout << t1.getName() << " " << t1.getIssigned() << " " << t1.getSigngrade() << " " << t1.getExecutegrade() << " " << t1.getTarget() << std::endl;
	std::cout << t2.getName() << " " << t2.getIssigned() << " " << t2.getSigngrade() << " " << t2.getExecutegrade() << " " << t2.getTarget() << std::endl;


}