/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:00:33 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/15 16:45:21 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cerr << "Error : Invalid argument" << std::endl;
    try
    {
        BitcoinExchange btc;

        btc.mapSetup(av[1], "|", btc.getMap("input"), false);
        btc.mapSetup("data.csv", ",", btc.getMap("data"), true);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}