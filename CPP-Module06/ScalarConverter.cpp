/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 01:11:52 by siuol             #+#    #+#             */
/*   Updated: 2025/07/04 15:50:06 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::Type    ScalarConverter::checker(const std::string& org)
{
    if ('0' <= org && org <= '9')
}

void    ScalarConverter::convert(const std::string& org)
{
    if (ScalarConverter::checker(org) == INVALID)
    {
        std::cout << "char   : impossible" << std::endl;
        std::cout << "int    : impossible" << std::endl;
        std::cout << "float  : impossible" << std::endl;
        std::cout << "double : impossible" << std::endl;
        return;
    }
    
    ScalarConverter::digitConverter(org);
    ScalarConverter::charConverter(org);
    std::cout << std::endl;
}