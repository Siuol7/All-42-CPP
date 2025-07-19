/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:02 by siuol             #+#    #+#             */
/*   Updated: 2025/07/19 19:02:29 by caonguye         ###   ########.fr       */
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
