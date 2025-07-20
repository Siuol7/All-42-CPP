/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:08 by siuol             #+#    #+#             */
/*   Updated: 2025/07/20 14:11:09 by caonguye         ###   ########.fr       */
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
            auto value_ptr = std::from_chars(token.data(), token.data() + token.length(), value);
            

            if (value_ptr.ec == std::errc())
                continue;
            else if (value_ptr.ec == std::errc::invalid_argument)
                throw std::runtime_error("Error : Not an integer");
            else if (value_ptr.ec == std::errc::result_out_of_range)
                throw std::runtime_error("Error : Out of range number");
            else if (value < 0)
                throw std::runtime_error("Error : Not a positive integer");
                
        }
    }
}