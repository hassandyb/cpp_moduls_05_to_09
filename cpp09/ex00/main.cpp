/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:01:30 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/08 11:30:29 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac , char **av)
{
	BitcoinExchange B;
	if(ac == 2)
	{
		B.ft_make_btc(av[1]);
	}
	else
		std::cout << "Error : Number of args is invalide." << std::endl;
	return (0);
	
}


