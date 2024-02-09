/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:10:42 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/09 13:48:08 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
	private :
		const std::string name;
		bool issigned;
		const int signgrade;
		const int executegrade;
	public :
		Form();
		Form(const std::string & name, int s_g, int e_g);
		Form(const Form & other);
		Form & operator=(const Form & other);
		~Form();
};


#endif