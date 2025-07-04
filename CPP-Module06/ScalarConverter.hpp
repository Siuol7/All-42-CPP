/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 01:11:48 by siuol             #+#    #+#             */
/*   Updated: 2025/07/04 18:21:25 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define INT_RGX = (R"(^(-?[0-9]+)$)")
#define FLOAT_RGX = (R"(^(-?[0-9]+(\.[0-9]+)$)")
#define CHAR_RGX = (R"(^(.)$)")
#define NAN_RGX = (R"(^(nan|NaN|NAN)$)")
#define INF_RFX = (R"(^(-|\+)?inff?)$)")


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
        static void    digitConverter(const std::string& org);
        static void    charConverter(const std::string& org);
        
    public  :
        static void convert(const std::string& org);
};
