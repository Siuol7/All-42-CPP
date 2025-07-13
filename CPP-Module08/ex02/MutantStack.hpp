/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 05:21:56 by siuol             #+#    #+#             */
/*   Updated: 2025/07/13 03:12:13 by siuol            ###   ########.fr       */
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
        MutantStack();
        ~MutantStack();
        MutantStack(const other& MutantStack);
        MutantStack& operator=(const other& MutantStack);
};