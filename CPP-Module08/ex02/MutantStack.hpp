/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 05:21:56 by siuol             #+#    #+#             */
/*   Updated: 2025/07/13 06:26:21 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

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

        using iterator = std::stack<T>::container_type::iterator;
        
        using const_iterator =  std::stack<T>::container_type::const_iterator;
        using riterator = std::stack<T>::container_type::reverse_iterator;
        using const_riterator = std::stack<T>::container_type::const_reverse_iterator;
};