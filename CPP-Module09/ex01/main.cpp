/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:20:07 by siuol             #+#    #+#             */
/*   Updated: 2025/07/16 22:16:40 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        LOG_RED("Error : Invalid arguments");
        return 1;
    }
    RPN rpn;
    try
    {
        rpn.calculateRPN(av[1]);
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
    return 0;
}