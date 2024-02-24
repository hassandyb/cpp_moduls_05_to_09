/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:18:40 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/23 14:34:59 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	int i;
	std::string str;
} Data;

class Serializer
{
	private :
		Serializer();
		Serializer(const Serializer & other);
		Serializer & operator=(const Serializer & other);
		~Serializer();
	public :
	
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
};




#endif
