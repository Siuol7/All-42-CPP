/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:30:32 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/11 03:10:46 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

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
        
        template<typename T>
        void    addNumber(T begin, T end)
        {
            unsigned int size = std::distance(begin, end);

            if (_storage.size() + size > UINT_MAX || _storage.size() + size > _N)
                throw std::runtime_error("No space left");

            std::inserter(_storage.end(), begin, end);
        }
        
    private :
        unsigned int        _N;
        std::vector<int>    _storage;
};