/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:37:51 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/07 19:52:01 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private :
		std::string const name;
		int grade;
	public :
		Bureaucrat();
		// we used the keyword const for name and other cause the function pomisses not to change them, cause actually it should't.
		Bureaucrat(const std::string & name, int grade);
		Bureaucrat(const Bureaucrat & other);
		Bureaucrat & operator=( const Bureaucrat & other);
		~Bureaucrat();
		
		

		
		std::string getName();
		int getGrade();
		
		void incrementGrade();
		void decrementGrade();
		
		class	GradeTooHighException : public std::exception;
		class	GradeTooLowException : public std::exception;
		
		
}


#endif