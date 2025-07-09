/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:30:32 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/09 16:40:05 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cerr << "\033[31m" << msg << "\033[0m" << std::endl

class Span
{
    public  :
        Span() = default;
        ~Span() = default;
        Span(const Span& other) = default;
        Span& operator=(const Span& other) = default;

        void            addNumber(int n);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();
        
    private :
        unsigned int        _N;
        std::vector<int>    _storage;
};