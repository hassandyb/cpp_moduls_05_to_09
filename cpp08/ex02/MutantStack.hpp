/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:55:06 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/04 15:57:00 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>
#include <algorithm>

// underlying container : data structure that the stack uses internally to store its elements.
// template <class _Tp, class _Container = deque<_Tp> > class _LIBCPP_TEMPLATE_VIS stack;
// class std::__1::deque<T>
    

template <typename T, class Container = std::deque< T> >
class MutantStack : public std::stack< T, Container>
{
    public :
        
        // Canonical form : ....
        MutantStack() : std::stack< T, Container>() {};
        MutantStack(const MutantStack & other) : std::stack< T , Container>(other) {};
        MutantStack & operator=(const MutantStack  other)
        {
            if(this != &other)
                std::stack< T, Container>::operator=(other);
            return *this;
        }
        ~MutantStack() {};
        
        // The rest : ...
        
        typedef typename Container::iterator iterator;// because we dont know the underlying container tyoe or the type to point on
        // This underlying container is accessed using c
        iterator begin() {return this->c.begin(); }
        iterator end() {return this->c.end(); }
        
        typedef typename Container::const_iterator const_iterator;// because we dont know the underlying container tyoe or the type to point on
        // This underlying container is accessed using c
        const const_iterator begin() const{return this->c.begin(); }
        const const_iterator end() const{return this->c.end(); }
        



        
};


#endif
