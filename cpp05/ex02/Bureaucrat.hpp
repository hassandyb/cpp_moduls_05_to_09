/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:37:51 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/11 16:01:48 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm; // Forward declaration technique
class Bureaucrat
{
	private :
		std::string name;
		int grade;
	public :
		Bureaucrat();
		Bureaucrat( const std::string & name, int grade);
		Bureaucrat( const Bureaucrat & other);
		Bureaucrat & operator=( const Bureaucrat & other) ;
		~Bureaucrat();
		
		

		
		std::string  getName() const;
		int  getGrade() const;
		

		
		class	GradeTooHighException : public std::exception
		{
			public : //we need to access it form bureaucrat object !
				virtual const char * what() const throw();

		};
		class	GradeTooLowException : public std::exception
		{
			public :
				virtual const char * what() const throw();

		};


		void incrementGrade();
		void decrementGrade();
		
		void signForm(AForm & form);
};

std::ostream & operator<<(std::ostream & stream, const Bureaucrat & bc);


#endif