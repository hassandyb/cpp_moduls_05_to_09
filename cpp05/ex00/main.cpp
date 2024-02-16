/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/16 17:11:04 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main ()
{

	try
	{
		// test 1 --------------------------
		Bureaucrat BC("Manager", 14);
		std::cout << BC << std::endl;
		BC.incrementGrade();
		std::cout << BC << std::endl;
		BC.decrementGrade();
		std::cout << BC << std::endl;
		
		//  test 2 --------------------------
		// Bureaucrat BC1("Manager", 2544357);
		// Bureaucrat BC2("Manager", -533547);
		
		// test 3 -----------------------
		// Bureaucrat BC("Manager", 1);
		// BC.incrementGrade();

		//test 4 ------------------
		// Bureaucrat BC("Manager", 150);
		// BC.decrementGrade();
		
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	

}