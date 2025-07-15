/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:00:33 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/16 01:45:50 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        LOG_RED("Error : Invalid argument");
        return (1);
    }
    try
    {
        BitcoinExchange btc;

        btc.mapData("data.csv", ",");
        btc.display(av[1], " | ");
    }
    catch(std::exception& e)
    {
       LOG_RED(e.what());
    }
}