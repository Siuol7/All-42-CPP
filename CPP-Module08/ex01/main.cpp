/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:29:56 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/11 03:09:55 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    Span span;
    
    try
    {
        LOG_GREEN("--NORMAL CASE--");
        span.addNumber(1);
        span.addNumber(2);
        span.addNumber(3);
        std::cout << "Shortest span is: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span is : " << span.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
    
}