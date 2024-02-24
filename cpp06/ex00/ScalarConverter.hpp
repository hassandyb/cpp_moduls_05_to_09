/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:36:48 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/22 12:30:07 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class ScalarConverter
{
	private :
		ScalarConverter();
		ScalarConverter(const ScalarConverter & other);
		ScalarConverter & operator=(const ScalarConverter & other);
		~ScalarConverter();
	public :
		static void convert( std::string & input);

		
};



#endif