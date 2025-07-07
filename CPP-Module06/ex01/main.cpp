/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 20:24:14 by siuol             #+#    #+#             */
/*   Updated: 2025/07/07 21:34:15 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include "Data.hpp"

int main()
{
    Data ptr{"A", 42};

    LOG_GREEN("--Before Serialization--");
    uintptr_t   Serialized = Serialization::serialize(&ptr);
    std::cout << "Original address   : " << &ptr << std::endl;
    std::cout << "Original name      : " << ptr.name << std::endl;
    std::cout << "Original value     : " << ptr.value << std::endl;
    std::cout << "serialized         : " << Serialized << std::endl;
    
    LOG_GREEN("--After Serialization--");
    Data*       deSerialized  = Serialization::deserialize(Serialized);
    std::cout << "deSerialized       : " << deSerialized << std::endl;
    std::cout << "deSerialized name  : " << deSerialized->name << std::endl;
    std::cout << "deSerialized value : " << deSerialized->value << std::endl << std::endl;

    ptr.name = "B";
    ptr.value = 43;
    LOG_GREEN("--Before Serialization--");
    std::cout << "Original address   : " << &ptr << std::endl;
    std::cout << "Original name      : " << ptr.name << std::endl;
    std::cout << "Original value     : " << ptr.value << std::endl;
    std::cout << "serialized         : " << Serialized << std::endl;
    
    LOG_GREEN("--After Serialization--");
    std::cout << "deSerialized       : " << deSerialized << std::endl;
    std::cout << "deSerialized name  : " << deSerialized->name << std::endl;
    std::cout << "deSerialized value : " << deSerialized->value << std::endl;
}