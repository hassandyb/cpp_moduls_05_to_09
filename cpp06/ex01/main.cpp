/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:27:08 by hed-dyb           #+#    #+#             */
/*   Updated: 2024/02/24 11:50:13 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main() 
{
    Data *data_befor = new Data();
    uintptr_t u;

    data_befor->i = 1337;
    data_befor->str = "Something...";


    
    
    u = Serializer::serialize(data_befor);
    Data *data_after = Serializer::deserialize(u);



    

    std::cout << "data_befor : " << data_befor << std::endl;
    std::cout << "data_after : "<< data_after << std::endl;


    // std::cout << data_befor->i << " " << data_befor->str << std::endl;
    // std::cout << data_after->i << " " << data_after->str << std::endl;
    delete data_befor;
    return 0;
}




