/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:00:33 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/15 17:27:50 by caonguye         ###   ########.fr       */
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
        (void)av;
    }
    catch(std::exception& e)
    {
       LOG_RED(e.what());
    }
}