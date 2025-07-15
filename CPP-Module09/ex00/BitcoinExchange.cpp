/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:00:28 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/15 16:58:58 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//OCF
BitcoinExchange::BitcoinExchange(){};

BitcoinExchange::~BitcoinExchange(){};

// BitcoinExchange::BitcoinExchange(const BitcoinExchange& other){};

// BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other){};


void    BitcoinExchange::mapSetup(std::string file, std::string deli, std::map<std::string, double>& map, bool data)
{
    std::ifstream   inf;
    std::string     line;
    std::string     key;
    double          value;
    size_t          pos;

    inf.open(file);
    if (!inf)
        throw std::runtime_error("Cannot open " + file);
    getline(inf, line);
    while (getline(inf, line))
    {
        if (line.empty())
            continue ;
        pos = line.find(deli);
        if (pos == std::string::npos)
        {
            std::cerr << "Error : bad input => " << line << std::endl;
            continue ;
        }
        key = line.substr(0, pos);
        try
        {
            value = std::stod(line.substr(pos + 1));
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error : invalid value (" + line.substr(pos + 1) + ")" << std::endl;
            continue ;
        }
        if (value < 0)
        {
            std::cerr << "Error : not a possitive number." << std::endl;
            continue ;
        }
        if (value > 1000 && !data)
        {
            std::cerr << "Error : too large a number." << std::endl;
            continue ;
        }
        map[key] = value;
    }
}

void    BitcoinExchange::mapData(std::string file, std::string deli)
{
    std::ifstream   inf;
    std::string     line;
    std::string     key;
    double          value;
    size_t          pos;

    inf.open(file);
    if (!inf)
        throw std::runtime_error("Cannot open " + file);
    getline(inf, line);
    while (getline(inf, line))
    {
        if (line.empty())
            continue ;
        pos = line.find(deli);
        if (pos == std::string::npos)
        {
            std::cerr << "Error : bad input => " << line << std::endl;
            continue ;
        }
        key = line.substr(0, pos);
        try
        {
            value = std::stod(line.substr(pos + 1));
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error : invalid value (" + line.substr(pos + 1) + ")" << std::endl;
            continue ;
        }
        if (value < 0)
        {
            std::cerr << "Error : not a possitive number." << std::endl;
            continue ;
        }
        this->_data[key] = value;
    }
}