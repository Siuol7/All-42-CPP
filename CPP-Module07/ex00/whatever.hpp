/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:17:32 by siuol             #+#    #+#             */
/*   Updated: 2025/07/08 13:56:10 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cerr << "\033[31m" << msg << "\033[0m" << std::endl

template<typename T>
void    swap(T& a, T& b)
{
    T   temp;
    temp = a;
    a = b;
    b = temp;
}

template<typename T>
T   const min(const T& a, const T& b)
{
    return (a < b ? a : b);
}

template<typename T>
T   const max(const T& a, const T& b)
{
    return (a > b ? a : b);
}