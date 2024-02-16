/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:10:42 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/16 17:12:24 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;// Forward declaration technique to avoid circular dependency 
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
		
		
		std::string getName() const;
		bool		getIssigned() const;
		int			getSigngrade() const;
		int			getExecutegrade() const;
		
		
		
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return ("Grade Too High:(remember) \n- Maximum grade of a form is 1 \n- To sign a form we need a grade higher or equal to the bureaucrat's grade.");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return ("Grade Too Low:(remember) \n- Minimum grade of a form is 150 \n- To sign a form we need a grade higher or equal to the bureaucrat's grade.");
				}
		};

		void beSigned(const Bureaucrat & b);
};

std::ostream & operator<<(std::ostream & stream, const Form & form);

#endif