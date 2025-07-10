/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:30:28 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/11 00:50:40 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    Span::addNumber(int n)
{
    if (this->_storage.size() == this->_N)
        throw std::runtime_error("No space left");
    this->_storage.push_back(n);
}

unsigned int    Span::shortestSpan()
{
    unsigned int res = UINT_MAX;

    for (std::size_t i = 0; i < this->_storage.size(); i++)
    {
        unsigned int gap = std::abs(this->_storage[i] - this->_storage[i + 1]);
        if (gap < res)
            res = gap;
    }
    return res;
}

unsigned int    Span::longestSpan()
{
    
}