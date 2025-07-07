/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 22:52:34 by siuol             #+#    #+#             */
/*   Updated: 2025/07/08 00:44:10 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Extra.hpp"

int main(void)
{
    try
    {
        Base* b = generate();
        LOG_GREEN("Pointer dynamic cast : ");
        identify(b);
        std::cout << std::endl;
        LOG_GREEN("Reference dynamic cast : ");
        identify(*b);
    }
    catch(std::exception& e)
    {
        LOG_RED("Bad alloc");
    }
}