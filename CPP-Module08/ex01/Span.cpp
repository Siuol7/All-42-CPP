/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:30:28 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/10 23:43:26 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    Span::addNumber(int n)
{
    if (this->_storage.size() == this->_N)
        throw std::runtime_error("No space left");
    this->_storage.end() = n;
}

unsigned int    Span::shortestSpan()
{
    
}

unsigned int    Span::longestSpan()
{
    
}