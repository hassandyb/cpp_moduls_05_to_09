/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/17 10:06:46 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ()
{
	try
	{
		// test 1 : -----------------
		Bureaucrat bc("The Manager", 1);
		Form form("Promotions Form", 45, 150);
		std::cout << form << std::endl;
		form.beSigned(bc);
		std::cout << form << std::endl;

		// test 2 : ------------------
		// Bureaucrat bc("The Manager", 1);
		// Form form("Promotion Form", 5, 150);
		// bc.signForm(form);

	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	

}