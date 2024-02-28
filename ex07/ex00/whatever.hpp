/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:36:01 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/26 17:39:37 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T & a, T & b)
{
	T temp ;
	temp = a;
	a = b;
	b = temp;
	
}

template <typename T>
T min (T a, T b)
{
	if(a < b)
		return a;
	else
		return b;

}

template <typename T>
T max(T a, T b)
{
	if(a  > b)
		return a;
	else
		return b;
}



#endif