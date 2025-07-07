/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 20:24:14 by siuol             #+#    #+#             */
/*   Updated: 2025/07/07 20:36:51 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include "Data.hpp"

int main()
{
    Data ptr{"A", 42};

    std::cout << "--Before Serialization--" << std::endl;
    uintptr_t   Serialized = Serialization::serialize(&ptr);
    std::cout << "Original address   : " << &ptr << std::endl;
    std::cout << "Original name      : " << ptr.name << std::endl;
    std::cout << "Original value     : " << ptr.value << std::endl;
    std::cout << "serialized         : " << Serialized << std::endl;
    
    std::cout << "--After Serialization--" << std::endl;
    Data*       deSerialized  = Serialization::deserialize(Serialized);
    std::cout << "deSerialized       : " << deSerialized << std::endl;
    std::cout << "deSerialized name  : " << deSerialized->name << std::endl;
    std::cout << "deSerialized value : " << deSerialized->value << std::endl;
}