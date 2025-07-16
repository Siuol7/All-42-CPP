/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 01:11:52 by siuol             #+#    #+#             */
/*   Updated: 2025/07/16 19:22:45 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::Type    ScalarConverter::checker(const std::string& org)
{
    static const std::regex regex_int(INT_RGX);
    static const std::regex regex_float(FLOAT_RGX);
    static const std::regex regex_double(DBL_RGX);
    static const std::regex regex_char(CHAR_RGX);
    static const std::regex regex_pseudo(PSD_RGX);
    
    if ((std::regex_match(org, regex_pseudo)))
        return PSEUDO;
    else if (std::regex_match(org, regex_int))
        return INTEGER;
    else if ((std::regex_match(org, regex_float)))
        return FLOAT;
    else if ((std::regex_match(org, regex_double)))
        return DOUBLE;
    else if ((std::regex_match(org, regex_char)))
        return CHAR;
    else
        return INVALID;
}

void    ScalarConverter::charConverter(const std::string& org, Type flag)
{
    std::cout << "char   : ";
    switch (flag)
    {
        case CHAR:
            std::cout << "'" << org << "'" << std::endl;
            break ;
        case PSEUDO:
            std::cout << "impossible" << std::endl;
            break ;
        default :
        {
            try
            {
                std::string cleaned = (flag == FLOAT) ? org.substr(0, org.length() - 1) : org; 
                int value = static_cast<int>(std::stod(cleaned));
                if (value < 0 || value > 127)
                    std::cout << "impossible" << std::endl;
                else if (!std::isprint(value))
                    std::cout << "Non displayable" << std::endl;
                else
                    std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
            }
            catch (std::exception &e)
            {
                std::cout << "impossible" << std::endl;
            }
        }
    }
}

void    ScalarConverter::digitConverter(const std::string& org, Type flag)
{
    int    value_int;
    float  value_float;
    double value_double;

    if (flag == CHAR)
    {
        value_int = static_cast<int>(('0' <= org[0] && org[0] <= '9') ? org[0] - '0' : org[0]);
        value_float = static_cast<float>(('0' <= org[0] && org[0] <= '9') ? org[0] - '0' : org[0]);
        value_double = static_cast<double>(('0' <= org[0] && org[0] <= '9') ? org[0] - '0' : org[0]);
        
        std::cout << "int    : " << value_int << std::endl;
        std::cout << "float  : " << std::fixed << std::setprecision(1) << value_float << "f" << std::endl;
        std::cout << "double : " << std::fixed << std::setprecision(1) << value_double;
        
        return ;
    }

    //INT
    try
    {
        value_int = std::stoi(org);
        std::cout << "int    : " << value_int << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "int    : impossible" << std::endl;
    }

    //FLOAT
    try
    {
        value_float = std::stof(org);
        std::cout << "float  : " << std::fixed << std::setprecision(1) << value_float << "f" << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "float  : impossible" << std::endl;
    }

    //DOUBLE
    try
    {
        value_double = std::stod(org);
        std::cout << "double : " << std::fixed << std::setprecision(1) << value_double;
    }
    catch(std::exception& e)
    {
        std::cout << "double : impossible" << std::endl;
    }
}

void    ScalarConverter::convert(const std::string& org)
{
    Type flag = ScalarConverter::checker(org);
    if (flag == INVALID)
    {
        std::cout << "char   : impossible" << std::endl;
        std::cout << "int    : impossible" << std::endl;
        std::cout << "float  : impossible" << std::endl;
        std::cout << "double : impossible" << std::endl;
        return;
    }
    
    ScalarConverter::charConverter(org, flag);
    ScalarConverter::digitConverter(org, flag);
    std::cout << std::endl;
}
