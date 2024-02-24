/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:36:21 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/24 14:09:58 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Canonical Form : #####################################

ScalarConverter::ScalarConverter() {};

ScalarConverter::ScalarConverter(const ScalarConverter & other)
{
	(void) other;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & other)
{
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter() {};

// The rest : #####################################

enum input_type
{
	_char,
	_int,
	_float,
	_double,
	_wrong,
};

static bool ft_its_overflow(input_type type, std::string & input)
{
	if(type == _int)
	{
		std::istringstream iss(input);
		int nbr ;
		iss >> nbr;
		if(iss.fail() == true)
		{
			std::cout << "We know you entered an overflowing int number." << std::endl;
			return true;
		}	
	}
	if(type == _float)
	{
		std::istringstream iss (input);
		float nbr;
		iss >> nbr;
		if(iss.fail() == true)
		{
			std::cout << "We know you entered an overflowing float number." << std::endl;
			return true;			
		}
	}
	if(type == _double)
	{
		std::istringstream iss(input);
		double nbr;
		iss >> nbr;
		if(iss.fail() == true)
		{
			std::cout << "We know you entered an overflowing double number." << std::endl;
			return true;
		}
	}
	return false;
}

static bool ft_is_a_char(std::string & input)
{
	if(input.length() != 1)
		return false;
	if(input[0] < 0 || input[0] > 127)
		return false;
	if(input[0] >= '0' && input[0] <= '9')
		return false;
	return true;
}

static bool ft_is_an_int(std::string & input)
{
	if(input.length() > 11)
		return false;
	size_t i = 0;
 	if(input.at(0) == '-' || input.at(0) == '+')
		i++;
	while(i < input.length())
	{
		if(isdigit(input.at(i)) == false)
			return false;
		i++;
	}
	if(ft_its_overflow(_int, input) == true)
		return false;
	return true;
}

static bool ft_is_a_float(std::string & input)
{
	int count = 0;

	size_t len = input.length();
	if(input == "-inff" || input == "+inff" || input == "nanf")
		return true;
	if(input.at(len - 1) != 'f')
		return false;
	for(size_t i = 0; i < len; i++)
	{
		if(isdigit(input.at(i))  == true)
			continue;
		if(input.at(i) == '.' || input.at(i) == 'f')
		{
			count++;
			continue;
		}
		return false;
	}
	if(count != 2)
		return false;
	// if(ft_its_overflow(_float, input) == true)
	// 	return false;
	return true;
}

static bool ft_is_a_double(std::string input)
{
	int count = 0;
	if(input == "-inf" || input == "+inf" || input == "nan")
		return true;
	for(size_t i = 0; i < input.length() ; i++)
	{
		if(isdigit(input.at(i)) == true)
			continue;
		if(input.at(i) == '.')
		{
			count++;
			continue;
		}
		return false;
	}
	if(count != 1)
		return false;
	if(ft_its_overflow(_double, input) == true)
		return false;
	return true;
}

input_type ft_detect_input_type(std::string & input)
{
	if(ft_is_a_char(input) == true)
		return _char;
	if(ft_is_an_int(input) == true)
		return _int;
	if(ft_is_a_float(input) == true)
		return _float;
	if(ft_is_a_double(input) == true)
		return _double;
	return _wrong; 
}

// convert functions : #####################################

static void ft_convert_char(std::string input)
{
	char c = input.at(0);
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void ft_convert_int(std::string input)
{
	int nbr;
	std::istringstream inputstream(input);
	inputstream >> nbr;
	
	
	
	

	if(isprint(nbr) == true)
		std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << nbr << std::endl;
	std::cout << "float: " << static_cast<float>(nbr) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
}

static void ft_convert_float(std::string input)
{
	int len = input.length();
	
	if(input == "-inff" || input == "+inff" || input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input <<std::endl;
		std::cout << "double: " << input.substr(0, len - 1) << std::endl;
		return ;
	}
	

	// convert std::string to an array (we neec const char *) touse strtod function
	
	char input_array[len + 1];
	for(int i = 0; i < len; i++)
		input_array[i] = input[i];
	input_array[len] = '\0';
	//convert the array to float ....
	char **rest = NULL;
	float nbr = strtof(input_array, rest);

	
	if(isprint(nbr) == true)
		std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(nbr) << std::endl;
	std::cout << "float: " << nbr << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nbr) << std::endl;
}

static void ft_convert_double(std::string input)
{
	int len = input.length();
	if(input == "-inf" || input == "+inf" || input == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
		return;
	}

	// convert std::string to an array ...

	char input_array[len + 1];
	for(int i = 0; i < len; i++)
		input_array[i] = input[i];
	input_array[len] = '\0';
	//convert the array to float ....
	char **rest = NULL;
	double nbr = strtod(input_array, rest);
	
	if(isprint(nbr) == true)
		std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(nbr) << std::endl;
	std::cout << "float: " << static_cast<float>(nbr) << "f" << std::endl;
	std::cout << "double: " << nbr << std::endl;
	
	
}

void ScalarConverter::convert(std::string & input)
{
	switch(ft_detect_input_type(input))
	{
		case _char :
			ft_convert_char(input);
			break;
		case _int :
			ft_convert_int(input);
			break;
		case _float :
			ft_convert_float(input);
			break;
		case _double :
			ft_convert_double(input);
			break;
		default :
			std::cout << "Nice ..., but we dont think we can convert that.." <<std::endl;
			break;
	}
}



