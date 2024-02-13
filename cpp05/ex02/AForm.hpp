/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:57:46 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/13 16:26:16 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;// Forward declaration technique

class AForm
{
	private :
		const std::string name;
		bool issigned;
		const int signgrade;
		const int executegrade;
		
		
	
	public :
		AForm();
		AForm(const std::string & name,int s_g, int e_g);
		AForm(const AForm & other);
		AForm & operator=(const AForm & other);
		~AForm();
		
		
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
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & stream, const AForm & form);

#endif