/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:28:30 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/10 16:24:34 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Canonical form ....

BitcoinExchange::BitcoinExchange()
{
	std::ifstream file("data.csv");
	std::string line;
	size_t indice;
	size_t len;

	std::getline(file, line);
	while(1)
	{
		std::getline(file, line);
		if(file.eof() == true)
			break;
		indice = line.find(",");
		len = line.length();
		Data[line.substr(0, indice)] = line.substr(indice + 1, len - indice);
		
	}
	file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & other)
{
	this->Data = other.Data;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & other)
{
	if(this != &other)
	{
		this->Data = other.Data;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange() {};

// the rest ....

void ft_error(std::string error_msg)
{
	std::cerr << "Error : " << error_msg << std::endl;
	exit (1);
}

void ft_file_is_ready(std::ifstream & file)
{
	std::string line;
	if(file.is_open() == false)
		ft_error("failed to open the file!");

	getline(file, line);
	if(file.eof() == true)
		ft_error("empty file!");

	if(line != "date | value")
		ft_error("First line must match (date | value).");
}

bool ft_date_and_value(std::string & date, std::string & value, std::string & line)
{
	size_t pos = line.find("|");
	size_t len = line.length();
	if(pos == std::string::npos)
	{
		std::cout << "Error : bad input => " << line << std::endl;
		return false;
	}
		
	date = line.substr(0, 10);
	value = line.substr(pos + 2, len -(pos + 2));
	return true;	
}

// parcing date : ------------------------

bool ft_all_are_digits(std::string & d_str, std::string & m_str, std::string & y_str)
{
	int len = d_str.length();

	for(int i = 0; i < len; i++)
	{
		if(std::isdigit(d_str.at(i)) == false)
			return false;
	}
	len = m_str.length();
	for(int i = 0; i < len; i++)
	{
		if(std::isdigit(m_str.at(i)) == false)
			return false;
	}
	len = y_str.length();
	for(int i = 0; i < len; i++)
	{
		if(std::isdigit(y_str.at(i)) == false)
			return false;
	}
	return true;
	
}

bool ft_check_structure(std::string & date)
{
	if(date.length() != 10)
	{
		std::cout << "Error : worng date => " << date << std::endl;
		return false;
	}
	if(date[4] != '-' || date[7] != '-')
	{
		std::cout << "Error : worng date => " << date << std::endl;
		return false;
	}
	return true;
}

bool ft_is_a_leap_year(int & y_int)// If it's a leap year, February has 29 days;
{
	if(y_int % 4 == 0 && y_int % 100 != 0)
		return true;
	if(y_int % 400 == 0)
		return true;
	
	return false;
}

bool ft_parse_time(int & d_int, int & m_int, int & y_int)
{
	// std::cout << y_int << " " << m_int << " " << d_int << std::endl;
	if(d_int < 1 || d_int > 31)
		return false;
	
	if(m_int < 1 || m_int > 12)
		return false;
	if(y_int < 2009 || y_int > 2022)
		return false;
	
	if(m_int == 4 || m_int == 6 || m_int == 9 || m_int == 11)// those monthes can only have 30 days max
	{
		if(d_int == 31)
			return false;
	}
	
	if(m_int == 2)// If it's a leap year, February has 29 days;
	{
		int max_february = 28;
		if(ft_is_a_leap_year(y_int) == true)
			max_february = 29;
		if(d_int > max_february)
			return false;
	}
	return true;
}

bool ft_valid_date(std::string & date)
{
	if( ft_check_structure(date) == false)
		return false;
	
	std::string y_str = date.substr(0, 4);
	std::string m_str = date.substr(5, 2);
	std::string d_str = date.substr(8, 2);

	if(ft_all_are_digits(d_str, m_str, y_str) == false)
		return false;
	
	int d_int;
	int m_int;
	int y_int;
	
	std::istringstream d_stream(d_str);
	std::istringstream m_stream(m_str);
	std::istringstream y_stream(y_str);
	
	d_stream >> d_int;
	m_stream >> m_int;
	y_stream >> y_int;
	
	if(ft_parse_time(d_int, m_int, y_int) == false)
		return false;
	
	return true;
}

// parcing value : -------------------------

bool ft_value_accepted(std::string & value)
{
	std::istringstream iss(value);
	double value_double;
	
	iss >> value_double;
	
	if(value_double > 1000)
	{
		std::cout << "Error : too large number." << std::endl;
		return false;
	}
	if(value_double < 0)
	{
		std::cout << "Error : not a positive number." << std::endl;
		return false;
	}

	return true;
}

bool ft_valid_value(std::string & value)
{
	if(value.empty() == true)
		return false;
	int count = 0;
	int len = value.length();
	for(int i = 0 ; i < len; i++)
	{
		if(value.at(0) == '-' || value.at(0) == '+')
			continue;
		
		if(std::isdigit(value.at(i)) == true)
			continue;
		if(value.at(i) == '.')
		{
			count++;
			continue;
		}
		return false;
	}
	if(count > 1)// there is more than one point
		return false;
	return true;

}

// Desplay results : -------------------------

int ft_string_to_int(std::string str)
{
	std::istringstream iss(str);
	int nbr;

	iss >> nbr;
	return nbr;
}

int ft_maxdays(int & month, int & year)
{
	switch (month)
	{
		case 1:
			return 31;
		case 2:
		{
			if(ft_is_a_leap_year(year) == true)
				return 29;
			else
				return 28;
		}
		case 3:
			return 31;
		case 4:
			return 30;
		case 5:
			return 31;
		case 6:
			return 30;
		case 7:
			return 31;
		case 8:
			return 31;
		case 9:
			return 30;
		case 10:
			return 31;
		case 11:
			return 30;
		default :
			return 31;
	}
}

std::string ft_int_to_string(int & nbr)
{
	std::ostringstream oss;
	oss << nbr;
	return oss.str();
}

std::string ft_previous_date(std::string date)
{
	int day = ft_string_to_int(date.substr(8, 2));
	int month = ft_string_to_int(date.substr(5, 2));
	int year = ft_string_to_int(date.substr(0, 4));
	
	day = day - 1;
	if(day == 0)
	{
		month = month - 1;
		if(month == 0)
		{
			month = 12;
			year = year - 1;
		}
		day = ft_maxdays(month, year);
	}
	
	std::string newday = ft_int_to_string(day);
	std::string newmonth = ft_int_to_string(month);
	std::string newyear = ft_int_to_string(year);
	if(newday.length() == 1)
		newday = "0" + newday;
	
	if(newmonth.length() == 1)
		newmonth = "0" + newmonth;
	
	return newyear + "-" + newmonth + "-" + newday;
	
}

double ft_str_to_double(std::string str)
{
	std::istringstream iss(str);

	double nbr;

	iss >> nbr;
	return nbr;

}
void BitcoinExchange::ft_desplay_result(std::string & date, std::string & value)
{
	std::map<std::string, std::string>::iterator it;
	
	std::string existing_date = date;
	std::string tmp_date;

	while(true)
	{
		it = this->Data.find(existing_date);
		if(it != this->Data.end())// find return end() in case it did not found something
			break;
		tmp_date = ft_previous_date(existing_date);
		existing_date = tmp_date;

	}
	
	//##########  strtod(value, NULL) * strtod() <<
	
	// strtod(it->second, NULL) *
	double exchange_date = ft_str_to_double(it->second); 
	double value_nbr = ft_str_to_double(value);
	std::cout << date << " => " << value << " = " << value_nbr * exchange_date <<  std::endl;
	
}

void BitcoinExchange::ft_make_btc(char *av)
{

		std::ifstream file(av);
		std::string line;
		ft_file_is_ready(file);
		
		std::string date;
		std::string value;
		while(std::getline(file, line))
		{
			if(ft_date_and_value(date, value, line) == false)
				continue;
			if(ft_valid_date(date) == false)
			{
				std::cout << "Error : invalide date => " << date << std::endl;
				continue;
			}
			if(ft_valid_value(value) == false)
			{
				std::cout << "Error : invalide value => " << value << std::endl;
				continue;
			}
			if(ft_value_accepted(value) == false)
				continue;
			ft_desplay_result(date, value);

		}
		



}







