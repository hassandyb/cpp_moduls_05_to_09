/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:58:12 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/04 15:54:56 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>

template <typename T>
void easyfind(T & container, int value )
{
	if(container.empty() == true)
		throw std::out_of_range ("This container enmpty!");
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if(it == container.end())
		throw std::out_of_range ("Value not found!");
	else
		std::cout << "The value " << value << " exist in this container." << std::endl;

};

#endif









