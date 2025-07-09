/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:54:39 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/09 14:28:18 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cerr << "\033[31m" << msg << "\033[0m" << std::endl

template<typename T>
typename T::iterator easyfind(T& container, int target)
{
    typename T::iterator it = std::find(container.begin(), container.end(), target);
    
    if (it == container.end())
        throw std::runtime_error("Target number (" + std::to_string(target) + ") is not found in the container");

    return it;
}

template<typename T>
typename T::const_iterator easyfind(const T& container, int target)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), target);
    
    if (it == container.end())
        throw std::runtime_error("Target number (" + std::to_string(target) + ") is not found in the container");

    return it;
}