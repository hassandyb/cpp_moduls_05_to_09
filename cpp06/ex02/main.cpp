/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:01:31 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/24 11:50:43 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"



// you should handel the over flow ....



int main ()
{
	Base *ptr;
	
	ptr = generate();
	identify(ptr);
	identify(*ptr);

	delete ptr;
}

