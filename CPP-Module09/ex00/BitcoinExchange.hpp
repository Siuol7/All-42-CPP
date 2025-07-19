/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:00:31 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/17 01:18:03 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include  <iostream>
#include  <string>
#include  <algorithm>
#include  <ctime>
#include  <fstream>
#include  <map>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cerr << "\033[31m" << msg << "\033[0m" << std::endl


class BitcoinExchange
{
    public  :
        //OCF
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other) = default ;
        BitcoinExchange& operator=(const BitcoinExchange& other) = default;

        bool    validateDate(std::string& date);
        void    mapData(const std::string& file, const std::string& deli);
        void    display(const std::string& file, const std::string& deli);
        double  getDataValue(std::string& date);
        
    private :
        std::map<std::string, double> _data;
};