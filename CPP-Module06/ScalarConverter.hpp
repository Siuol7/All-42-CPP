/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 01:11:48 by siuol             #+#    #+#             */
/*   Updated: 2025/07/05 03:27:11 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <regex>

#define INT_RGX R"(^(-?[0-9]+)$)"
#define FLOAT_RGX R"(^(-?[0-9]+(\.[0-9]+)?f?)$)"
#define CHAR_RGX R"(^(.)$)"
#define PSD_RGX R"(^((nan|NaN|NAN)|(-|\+)?inff?)$)"


class ScalarConverter
{
    private :
        ScalarConverter() = delete;
        ~ScalarConverter() = delete;
        ScalarConverter(const ScalarConverter& other) = delete;
        ScalarConverter& operator=(const ScalarConverter& other) = delete;

        enum Type{
            CHAR,
            INTEGER, 
            FLOAT,
            DOUBLE,
            PSEUDO,
            INVALID
        };
        static Type    checker(const std::string& org);
        static void    digitConverter(const std::string& org, Type flag);
        static void    charConverter(const std::string& org, Type flag);
        
    public  :
        static void convert(const std::string& org);
};
