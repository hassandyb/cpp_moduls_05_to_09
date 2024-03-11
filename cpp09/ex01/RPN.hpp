/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:09:39 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/11 14:15:06 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
	private :
		std::stack<int> _stack;
		
	public :
		RPN();
		RPN(const RPN & other);
		RPN & operator=(const RPN & other);
		~RPN();
		



		void start(std::string str);
		void ft_process_number(std::string & element);
		void ft_process_operation(std::string & element);
};