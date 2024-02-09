/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:10:42 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/09 16:48:34 by hed-dyb          ###   ########.fr       */
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
		Form(const std::string & name, int s_g);
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
					return ("Exception : The highest grade a bureaucrat can get is one.");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return ("Exception : The lowest grade a bureaucrat can get is 150.");
				}
		};

};

std::ostream & operator<<(std::ostream & stream, const Form & form);

#endif