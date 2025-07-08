/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:05:59 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/09 02:13:54 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arr1(5);
        
        //Exception
        LOG_GREEN("Try to access out of range index");
        std::cout << arr1[6];
    }
    catch(std::exception& e)
    {
        LOG_RED(e.what());
    }
}