/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:37:51 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/07 14:05:24 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iosream>

class Bureaucrat
{
	private :
		std::string const name;
		int grade;
	public :
		Bureaucrat();
		

		
		std::string getName();
		std::string getGrade();
		
		void incrementGrade();
		void decrementGrade();
		
		
}


#endif