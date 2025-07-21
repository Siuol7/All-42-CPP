/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:10 by siuol             #+#    #+#             */
/*   Updated: 2025/07/21 11:20:34 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <charconv>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <chrono>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cerr << "\033[31m" << msg << "\033[0m" << std::endl

using Time = std::chrono::duration<double, std::milli>;
using Timer = std::chrono::high_resolution_clock;

class PmergeMe
{
    public :
        PmergeMe(char **av);
        ~PmergeMe() = default;
        PmergeMe(const PmergeMe& other) = default;
        PmergeMe& operator=(const PmergeMe& other) = default;

    private :
        std::vector<int> _vector;
        std::list<int>   _list;

        template<typename Container>
        Time sort(Container* container);
};
