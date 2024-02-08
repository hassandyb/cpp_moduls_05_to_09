/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:37:51 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/08 14:15:54 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private :
		std::string name;
		int grade;
	public :
		Bureaucrat();
		// we used the keyword const for name and other cause the function pomisses not to change them, cause actually it should't.
		Bureaucrat( const std::string & name, int grade);
		Bureaucrat( const Bureaucrat & other);
		Bureaucrat & operator=( const Bureaucrat & other) ;
		~Bureaucrat();
		
		

		
		std::string  getName() const;
		int  getGrade() const;
		

		
		class	GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw();

		};
		class	GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw();

		};

		

		// void incrementGrade();
		// void decrementGrade();
};

std::ostream & operator<<(std::ostream & stream, const Bureaucrat & bc);


#endif