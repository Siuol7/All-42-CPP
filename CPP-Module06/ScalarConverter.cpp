/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 01:11:52 by siuol             #+#    #+#             */
/*   Updated: 2025/07/04 14:22:33 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    ScalarConverter::convert(const std::string& org)
{
    if (!checker(org))
    {
        std::cout << "char   : impossible" << std::endl;
        std::cout << "int    : impossible" << std::endl;
        std::cout << "float  : impossible" << std::endl;
        std::cout << "double : impossible" << std::endl;
        return;
    }
}