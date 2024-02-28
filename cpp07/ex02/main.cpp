/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:54:44 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/28 13:46:00 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"



void ft_print_abjcets(Array<int> & A1, Array<int> & A2, Array<int> & A3)
{
	std::cout << "A1 : size = " << A1.size() << ",  Data : ";
	std::cout << A1[0] << " " << A1[1] << " " << A1[2] << std::endl;
	
	std::cout << "A2 : size = " << A2.size() << ",  Data : ";
	std::cout << A2[0] << " " << A2[1] << " " << A2[2] << std::endl;
	
	std::cout << "A1 : size = " << A1.size() << ",  Data : ";
	std::cout << A3[0] << " " << A3[1] << " " << A3[2] << std::endl;
}

int main ()
{
	//TEST 1 : the canonical form :
	Array<int> A1(3);  
	for(unsigned int i = 0; i < A1.size(); i++)
		A1[i] = i * 100;
	Array<int> A2(A1); 
	Array<int> A3; 
	A3 = A1;
	ft_print_abjcets(A1, A2, A3);
	
	
	// Test 2 : empty array ...

	// Array<std::string> A(10);
	// for(unsigned int i = 0; i < A.size() ; i++)
	// 		std::cout << A[i] << std::endl;
			
	
	// Test 3 : throwing exception
	
	// try
	// {
	// 	Array<int> A(5);
	// 	for (unsigned int i = 0; i < A.size() ; i++)
	// 		A[i] = i * 10;
	// 	for (unsigned int i = 0; i < A.size() + 32433; i++)
	// 		std::cout << A[i] << std::endl;
	// }
	// catch(std::exception & e)
	// {
	// 	std::cout << "Error : " << e.what() << std::endl;
	// }


	// Test 4 : const subscript operator : 
	
	// const Array<int>  A(4);
	// // A[0] = 100;// you cant acress !!!
	// std::cout << A[0] << std::endl; // but you can read from the instance.

}



