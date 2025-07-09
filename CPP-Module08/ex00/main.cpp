/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:54:41 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/09 14:24:09 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> arr={1, 2, 3};
    std::list<int> lit={1, 2, 3};

    try 
    {
        LOG_GREEN("---FOUND CASE---");
        auto arr_it = easyfind(arr, 3);
        *arr_it = 99;
        std::cout << arr[2] << std::endl << std::endl;
        LOG_GREEN("---NOT FOUND CASE---");
        auto stack_it  = easyfind(lit, 4);
        (void)stack_it;
    }
    catch(std::exception& e)
    {
        LOG_RED(e.what());
    }
}