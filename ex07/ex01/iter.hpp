/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:48:27 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/28 11:20:23 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP


#include <iostream>

template <typename T, typename parameter>


void iter(T* array, int len, void (*ft_function )(parameter & ))
{
	for( int i = 0; i < len ; i++)
	{
		ft_function(array[i]);
	}
}



#endif 
