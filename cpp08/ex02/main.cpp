/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:54:07 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/03/04 16:11:37 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"




void ft_print_all(MutantStack<int> & M1, MutantStack<int> & M2, MutantStack<int> & M3)
{
    MutantStack<int>::iterator it;
    // Printing the M1 ...
    std::cout << "M1 : size = " << M1.size() << " | elements : "; 
    for(it = M1.begin(); it != M1.end(); it++)
        std::cout << " " << *it;
        
    // Printing M2 ...
    std::cout << "\nM2 : size = " << M2.size() << " | elements : ";
    for(it = M2.begin(); it != M2.end(); it++)
        std::cout << " " << *it;
        
    // Printing M3 ...
    std::cout << "\nM3 : size = " << M3.size() << " | elements : ";
    for(it = M3.begin(); it != M3.end(); it++)
        std::cout << " " << *it;
}

int main ()
{
    // Test 1 : canonical form ..................
    MutantStack<int> M1;
    for(int i = 0; i < 4; i++)
        M1.push(i * 10);
    MutantStack<int> M2(M1);
    MutantStack<int> M3;
    M3 = M2;
    ft_print_all(M1, M2, M3);
    
    // Test 2 : lets use vector as an underlying container ..................
    // MutantStack<int, std::vector<int> > M;
    
    // M.push(2);
    // M.push(4);
    // M.push(6);
    // M.push(8);

    // MutantStack<int, std::vector<int> >::iterator it;
    // std::cout << M.top() << std::endl;
    // M.pop();
    // std::cout << M.top() << std::endl;
    



    // Test 3 : lets use list as an underlying container ..................
    // MutantStack<float, std::list<float> > M;
    
    // M.push(10.555);
    // M.push(20.555);
    // M.push(30.555);
    // M.push(40.555);
    
    // MutantStack<float, std::list<float> >::iterator it;
    
    // it = M.begin();
    // std::cout << *it << std::endl;
    // it++;
    // std::cout << *it << std::endl;
    // it--;
    // std::cout << *it << std::endl;

    
    return (0);
    
}