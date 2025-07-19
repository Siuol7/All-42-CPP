/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:08 by siuol             #+#    #+#             */
/*   Updated: 2025/07/20 01:10:42 by siuol            ###   ########.fr       */
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
        }
    }
}