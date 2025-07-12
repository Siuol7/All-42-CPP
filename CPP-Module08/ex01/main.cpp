/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:29:56 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/12 03:29:38 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    
    try
    {
        Span span;
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
    
    try
    {
        Span span(2);
        LOG_GREEN("--NO SPACE CASE--");
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
    
    try
    {
        Span span(2);
        LOG_GREEN("--NOT FOUND CASE--");
        span.addNumber(1);
        std::cout << "Shortest span is: " << span.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }

    try
    {
        Span span(2);
        LOG_GREEN("--NO SPACE CASE--");
        span.addNumber(1);
        std::cout << "Longest span is : " << span.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
    
    try
    {
        Span span(10);
        std::vector<int> extra = {-4, -5, -1};
        LOG_GREEN("--ADD VECTOR CASE--");
        span.addNumber(extra.begin(), extra.end());
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