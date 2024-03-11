/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:26:51 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/11 13:16:51 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"






int main (int ac, char **av)
{
	if(ac != 2)
	{
		std::cerr << "Error : Check args!" << std::endl;
		return 1;
	}
	RPN rpn;
	
	std::string str(av[1]);
	rpn.start(str);
}



