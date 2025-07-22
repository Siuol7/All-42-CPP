/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:08 by siuol             #+#    #+#             */
/*   Updated: 2025/07/22 11:00:28 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

PmergeMe::PmergeMe(char **av)
{
    int                 value;
    std::istringstream  stream;
    std::string         token;
    while (*av != NULL)
    {
        stream.clear();
        stream.str(*av);
        while (stream >> token)
        {
            auto value_ptr = std::from_chars(token.data(), token.data() + token.length(), value);
            

            if (value_ptr.ec == std::errc::invalid_argument)
                throw std::runtime_error("Error : Not an integer");
            else if (value_ptr.ptr != token.data() + token.length())
                throw std::runtime_error("Error : Not an integer");
            else if (value_ptr.ec == std::errc::result_out_of_range)
                throw std::runtime_error("Error : Out of range number");
            else if (value < 0)
                throw std::runtime_error("Error : [" + std::to_string(value) + "] is not a positive integer");
            else if (std::find(this->_vector.begin(), this->_vector.end(), value) != this->_vector.end())
                throw std::runtime_error("Error : [" + std::to_string(value) + "] appears twice");
            this->_vector.push_back(value);
            this->_list.push_back(value);
        }
        av++;
    }
    LOG_GREEN("Previous sequence :");
    for (auto nb : this->_vector)
        std::cout << " " << nb;
    std::cout << std::endl;
}

void    PmergeMe::sort()
{
    Time vSortTime = vectorSort(this->_vector);
    Time lSortTime = listSort(this->_list);
    auto    vIt = this->_vector.begin();
    auto    lIt = this->_list.begin();

    if (this->_vector.size() != this->_list.size())
        throw std::runtime_error("Error : Sorting failed");
    
    LOG_GREEN("Sorted container:");   
    for(; vIt != this->_vector.end(); vIt++, lIt++)
    {
        if (*vIt != *lIt)
            throw std::runtime_error("Error : vector value [" + std::to_string(*vIt)
                        +"] different from list value [" + std::to_string(*lIt) +"]");
        std::cout << " " << *vIt;
    }
    std::cout << std::endl;
    
    LOG_GREEN("Time to process a range of ");
    LOG_GREEN(std::to_string(this->_vector.size()));
    LOG_GREEN(" elements with std::vector : ");
    std::cout << std::fixed << std::setprecision(4) << vSortTime.count() << "us" << std::endl;

     LOG_GREEN("Time to process a range of ");
    LOG_GREEN(std::to_string(this->_list.size()));
    LOG_GREEN(" elements with std::list : ");
    std::cout << std::fixed << std::setprecision(4) << lSortTime.count() << "us" << std::endl;
}