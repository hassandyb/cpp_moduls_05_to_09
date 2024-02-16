/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:59:01 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/16 13:15:18 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"


class Intern 
{
	public :
		Intern();
		Intern(const Intern & other);
		Intern & operator=( const Intern & other);
		~Intern();
		
		
		AForm * makeForm(std::string form_name, std::string form_target);
};
#endif