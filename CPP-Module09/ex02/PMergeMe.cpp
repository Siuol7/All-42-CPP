/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:08 by siuol             #+#    #+#             */
/*   Updated: 2025/07/20 21:12:34 by siuol            ###   ########.fr       */
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
        while (stream >> token)
        {
            stream.str(*av);
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
        std::cout << nb << " ";
    std::cout << std::endl;
}

