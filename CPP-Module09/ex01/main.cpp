/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:20:07 by siuol             #+#    #+#             */
/*   Updated: 2025/07/16 18:28:57 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        LOG_RED("Error : Invalid arguments");
    RPN rpn;
    try
    {
        rpn.calculateRPN(av[1]);
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
    
}