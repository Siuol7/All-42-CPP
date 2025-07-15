/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:00:31 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/15 17:08:42 by caonguye         ###   ########.fr       */
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

        void    mapData(std::string file, std::string deli);

        void    display(std::string file, std::string deli);
        
    private :
        std::map<std::string, double> _data;
};