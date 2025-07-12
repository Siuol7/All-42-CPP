/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:30:28 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/12 03:21:43 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N){_storage.reserve(N);}

void    Span::addNumber(int n)
{
    if (this->_storage.size() == this->_N)
        throw std::runtime_error("No space left");
    this->_storage.push_back(n);
}

unsigned int    Span::shortestSpan()
{
    if (this->_storage.size() < 2)
        throw std::runtime_error("Cannot find shortest span of 1 element");
        
    unsigned int res = UINT_MAX;
    std::vector<int> sorted = this->_storage;
    std::sort(sorted.begin(), sorted.end());
    
    for (std::size_t i = 0; i < this->_storage.size() - 1; i++)
    {
        unsigned int gap = sorted[i + 1] - sorted[i];
        res = std::min(res, gap);
    }
    return res;
}

unsigned int    Span::longestSpan()
{
    if (this->_storage.size() < 2)
        throw std::runtime_error("Cannot find longest span of 1 element");
    return *std::max_element(this->_storage.begin(), this->_storage.end())
            - *std::min_element(this->_storage.begin(), this->_storage.end());   
}