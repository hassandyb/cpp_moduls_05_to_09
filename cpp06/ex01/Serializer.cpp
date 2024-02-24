/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:18:25 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/22 16:01:59 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Canonical form : ------------

Serializer::Serializer() {}

Serializer::Serializer(const Serializer & other) {(void) other; }

Serializer & Serializer::operator=(const Serializer & other) { (void)other; return *this; }

Serializer::~Serializer() {};

// other : --------------------

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}







