/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:50:39 by siuol             #+#    #+#             */
/*   Updated: 2025/07/07 19:17:41 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdint>
#include "Data.hpp"

class   Serialization
{
    public  :
        uintptr_t   serialize(Data* ptr);
        Data*       deserialize(uintptr_t raw);

    private :
        Serialization() = delete;
        ~Serialization() = delete;
        Serialization(const Serialization& other) = delete;
        Serialization& operator=(const Serialization& other) = delete;
};