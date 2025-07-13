/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 05:21:56 by siuol             #+#    #+#             */
/*   Updated: 2025/07/13 04:47:36 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>

template<typename T>
class   MutantStack : public std::stack<T>
{
    public :
        MutantStack() : std::stack<T>(){};
        ~MutantStack() : ~std::stack<T>(){};
        MutantStack(const other& MutantStack) : std::stack<T>(other){};
        MutantStack& operator=(const other& MutantStack)
        {
            if (this != other)
                std::stack<T>::operator=(other);
            return *this;
        }
};