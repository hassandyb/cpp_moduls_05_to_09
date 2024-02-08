/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/08 15:30:31 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main ()
{

	try
	{
		// Bureaucrat BC("Manager", 14);
		// std::cout << BC << std::endl;
		// BC.incrementGrade();
		// std::cout << BC << std::endl;
		// BC.decrementGrade();
		// std::cout << BC << std::endl;
		
		
		// Bureaucrat BC("Manager", 257);
		
		
		// Bureaucrat BC("Manager", -57);
		
		
		// Bureaucrat BC("Manager", 1);
		// BC.incrementGrade();

		
		Bureaucrat BC("Manager", 150);
		BC.decrementGrade();
		
	}
	catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() <<std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() <<std::endl;
	}
	

}