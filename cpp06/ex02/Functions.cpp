/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:50:36 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/24 11:51:12 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

// A function that does upcating (base pointer to drived object )
Base * generate(void)
{
	srand(time(NULL));
	
	int randomnumber = rand() % 3;

	switch(randomnumber)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	

	return NULL;
}


void identify(Base* p)
{

	A * a_ptr = dynamic_cast<A*>(p);
	B * b_ptr = dynamic_cast<B*>(p);
	C * c_ptr = dynamic_cast<C*>(p);


	if(a_ptr != NULL)
		std::cout << "Actual type is : A" << std::endl;
	else if (b_ptr != NULL)
		std::cout << "Actual type is : B" << std::endl;
	else if (c_ptr != NULL)
		std::cout << "Actual type is : C" << std::endl;
	else
		std::cout << "HAHAHA Funny, ....try again... " << std::endl;
}


void identify(Base& p)
{

	try 
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "Actual type is : A" << std::endl;
		
		(void)a;
	}
	catch (std::bad_cast &)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			std::cout << "Actual type is : B" << std::endl;
			(void)b;
		}
		catch(std::bad_cast &)
		{
			try 
			{
				C& c = dynamic_cast<C&>(p);
				std::cout << "Actual type is : C" << std::endl;
				(void)c;
			}
			catch (std::bad_cast &)
			{
				std::cout << "aaahM We did not see anything..." << std::endl;
			}

		}
	}
	
}








