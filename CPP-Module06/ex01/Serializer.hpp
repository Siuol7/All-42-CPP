/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:50:39 by siuol             #+#    #+#             */
/*   Updated: 2025/07/07 20:59:23 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdint>
#include "Data.hpp"

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl

class   Serializer
{
    public  :
        static uintptr_t   serialize(Data* ptr);
        static Data*       deserialize(uintptr_t raw);

    private :
        Serializer() = delete;
        ~Serializer() = delete;
        Serializer(const Serializer& other) = delete;
        Serializer& operator=(const Serializer& other) = delete;
};