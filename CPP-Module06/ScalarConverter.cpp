/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 01:11:52 by siuol             #+#    #+#             */
/*   Updated: 2025/07/05 03:27:20 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::Type    ScalarConverter::checker(const std::string& org)
{
    const std::regex regex_int(INT_RGX);
    const std::regex regex_float(FLOAT_RGX);
    const std::regex regex_char(CHAR_RGX);
    const std::regex regex_pseudo(PSD_RGX);
    
    if (std::regex_match(org, regex_int))
        return INTEGER;
    else if ((std::regex_match(org, regex_float)))
        return FLOAT;
    else if ((std::regex_match(org, regex_char)))
        return CHAR;
    else if ((std::regex_match(org, regex_pseudo)))
        return PSEUDO;
    else
        return INVALID;
}

void    ScalarConverter::convert(const std::string& org)
{
    ScalarConverter::Type flag = ScalarConverter::checker(org);
    if (flag == INVALID)
    {
        std::cout << "char   : impossible" << std::endl;
        std::cout << "int    : impossible" << std::endl;
        std::cout << "float  : impossible" << std::endl;
        std::cout << "double : impossible" << std::endl;
        return;
    }
    
    ScalarConverter::digitConverter(org, flag);
    ScalarConverter::charConverter(org, flag);
    std::cout << std::endl;
}
