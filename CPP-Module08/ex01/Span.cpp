/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:30:28 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/11 00:01:24 by siuol            ###   ########.fr       */
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
    
}

unsigned int    Span::longestSpan()
{
    
}