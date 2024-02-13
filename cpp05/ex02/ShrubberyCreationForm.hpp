/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:49:16 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/13 17:03:28 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
	private :
		std::string target;
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & other);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & other);
		~ShrubberyCreationForm();
		
		std::string getTarget();
		void execute(Bureaucrat const & executor) const;
};

#endif