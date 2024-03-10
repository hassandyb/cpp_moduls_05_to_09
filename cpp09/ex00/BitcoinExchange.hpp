/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:01:56 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/10 15:29:58 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <limits>
#include <stdlib.h>

class BitcoinExchange
{
	private :
		std::map<std::string, std::string> Data;
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange & other);
		BitcoinExchange & operator=(const BitcoinExchange & other);
		~BitcoinExchange();
		
		void ft_desplay_result(std::string & date, std::string & value);
		void ft_make_btc(char *av);

	
};