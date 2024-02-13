/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:41:23 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/13 13:24:09 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"




int main ()
{
    ShrubberyCreationForm t1;
    std::cout << t1.getName() << " "  << t1.getIssigned() << " " << t1.getSigngrade() << " " << t1.getExecutegrade() << " " << t1.getTarget() << std::endl; 
}