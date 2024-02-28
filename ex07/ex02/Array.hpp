/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:35:52 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/27 10:50:17 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
	private :
		T *Data;
		unsigned int n;
	public :
		Array() : Data(NULL), n(0) {};
		Array(unsigned int n) : n(n) 
		{ 
			this->Data = new T[this->n];
		}
		Array(const Array & other): n(other.n)
		{
			this->Data = new T[this->n];
			for(unsigned int i = 0; i < this->n; i++)
				this->Data[i] = other.Data[i];
			
		}
		Array & operator=(const Array & other)
		{
			if(this != &other)
			{
				delete[] this->Data;
				this->n = other.n;
				this->Data = new T[this->n];
				for(unsigned int i = 0; i < this->n; i++)
					this->Data[i] = other.Data[i];
			}
			return *this;
		}
		~Array() {delete[] this->Data;};

		T & operator[](unsigned int index)
		{

			if(index >= this->n)
				throw std::out_of_range("Index out of bounds!");

			return this->Data[index];	

		};
		
		const T & operator[](unsigned int index) const
		{

			if(index >= this->n)
				throw std::out_of_range("Index out of bounds!");

			return this->Data[index];	
		};
		
		unsigned int getSize() { return this->n ;};
		
		


};







#endif

