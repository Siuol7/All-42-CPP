/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:00:28 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/17 01:17:56 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//OCF
BitcoinExchange::BitcoinExchange(){};

BitcoinExchange::~BitcoinExchange(){};

// BitcoinExchange::BitcoinExchange(const BitcoinExchange& other){};

// BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other){};


bool    BitcoinExchange::validateDate(std::string& date)
{
    struct tm input = {};

    if (date.size() != 10 || !strptime(date.c_str(), "%Y-%m-%d", &input))
        return (0);
    struct tm org = input;
    time_t  modified = mktime(&input);
    if (modified == -1 || org.tm_year != input.tm_year || org.tm_mon != input.tm_mon || org.tm_mday != input.tm_mday)
        return (0);
    return (1);
}

double  BitcoinExchange::getDataValue(std::string& date)
{
    auto it = this->_data.upper_bound(date);
    if (it == this->_data.begin())
        throw std::runtime_error("No value on " + date);
    it--;
    return it->second;
}

void    BitcoinExchange::display(const std::string& file, const std::string& deli)
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
        if (!validateDate(key))
        {
            std::cerr << "Error : invalid date => " << key << std::endl;
            continue ;
        }
        try
        {
            value = std::stod(line.substr(pos + 3));
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error : invalid value (" + line.substr(pos + deli.length()) + ")" << std::endl;
            continue ;
        }
        if (value < 0)
        {
            std::cerr << "Error : not a positive number." << std::endl;
            continue ;
        }
        if (value > 1000)
        {
            std::cerr << "Error : too large a number." << std::endl;
            continue ;
        }
        try
        {
            std::cout << key << " => " << value << " = " << value * this->getDataValue(key) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}

void    BitcoinExchange::mapData(const std::string& file, const std::string& deli)
{
    std::ifstream   inf;
    std::string     line;
    std::string     key;
    double          value;
    size_t          pos;

    inf.open(file);
    if (!inf)
        throw std::runtime_error("DB Error : Cannot open " + file);
    getline(inf, line);
    while (getline(inf, line))
    {
        if (line.empty())
            continue ;
        pos = line.find(deli);
        if (pos == std::string::npos)
            throw std::runtime_error("DB Error : no value");
        key = line.substr(0, pos);
        if (!validateDate(key))
            throw std::runtime_error("DB Error : invalid date" + key);
        try
        {
            value = std::stod(line.substr(pos + 1));
        }
        catch(const std::exception& e)
        {
            throw std::runtime_error("DB Error : invalid value (" + line.substr(pos + deli.length()) + ")");
        }
        if (value < 0 || value > 100000000)
            throw std::runtime_error("DB Error : outrange value.");
        this->_data[key] = value;
    }
}