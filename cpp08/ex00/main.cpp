/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:55:45 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/04 15:22:53 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"






int main ()
{
	
	// Test 1 : using vector container...
	try
	{
		std::vector<int> V;

		V.push_back(0);
		V.push_back(10);
		V.push_back(20);
		V.push_back(30);
		V.push_back(40);
		V.push_back(50);
		
		easyfind(V, 50);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	
	//Test 2 : using list ...



	// try
	// {
	// // std::list<int> L;
	
	// // L.push_back(0);
	// // L.push_back(1);
	// // L.push_back(2);
	// // L.push_back(3);
	// // L.push_back(4);
	// // L.push_back(5);
	
	// // easyfind(L, 2);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	

	
	


	
}


