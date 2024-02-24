/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:54:56 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/23 11:01:37 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>



class Base
{
	public :
		virtual ~Base() ;
};

class A : public Base {};

class B : public Base {};

class C : public Base {};




Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif