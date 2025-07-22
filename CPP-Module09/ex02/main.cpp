/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:02 by siuol             #+#    #+#             */
/*   Updated: 2025/07/22 10:54:59 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

int main (int ac, char **av)
{
    if (ac < 2)
    {
        LOG_RED("Error : Lack of argument(s)");
        return (1);
    }
    try
    {
        PmergeMe pm(av + 1);
        pm.sort(); 
    }
    catch(std::exception& e)
    {
        LOG_RED(e.what());      
    }
    return (0);
}
