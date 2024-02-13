/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:16:05 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/13 15:33:13 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Canonical Form : ---------------------------

PresidentialPardonForm::PresidentialPardonForm();





PresidentialPardonForm::PresidentialPardonForm(std::string target);
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other);
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other);
PresidentialPardonForm::~PresidentialPardonForm();


// The rest : ---------------------------



std::string PresidentialPardonForm::getTarget();


