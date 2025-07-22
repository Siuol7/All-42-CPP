/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:10 by siuol             #+#    #+#             */
/*   Updated: 2025/07/23 00:07:58 by siuol            ###   ########.fr       */
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
#include <iomanip>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m"
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

        void    sort();
        
    private :
        std::vector<int> _vector;
        std::list<int>   _list;
        
        
        Time    _vectorSort(std::vector<int>& container);
        Time    _listSort(std::list<int>& container);
        
        void    _vectorInsert(std::vector<int>& main, std::vector<int>& pending);
        void    _listInsert(std::list<int>& main, std::list<int>& pending);


        template<typename Container>
        Container   _jacobGenerate(const Container& container)
        {
            Container   jacob;
            auto size = container.size();
            
            jacob.push_back(0);
            jacob.push_back(1);
            
            while (jacob.back() < size)
            {
                auto last = jacob.back();
                auto second = *std::prev(jacob.end() , 2);
                jacob.push_back(last + 2 * second);
            }
            return jacob;
        }
};
