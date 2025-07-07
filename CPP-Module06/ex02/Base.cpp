/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 22:52:29 by siuol             #+#    #+#             */
/*   Updated: 2025/07/08 01:06:11 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Extra.hpp"

Base*   generate(void)
{
    srand(time(0));
    int n = std::rand() % 3;

    switch (n)
    {
        case 0 :
            return new A;
        case 1 :
            return new B;
        default :
            return new C;
    }
}

void    identify(Base* p)
{
    if (!p)
        std::cout << "nullptr" << std::endl;
    else if (dynamic_cast<A*>(p))
    {
        std::cout << "A" << std::endl;
        return ;
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "B" << std::endl;
        return ;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "C" << std::endl;
        return ;
    }
}

void    identify(Base& p)
{
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch (std::exception& e){}

    try
    {
        dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch (std::exception& e){}

    try
    {
        dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch (std::exception& e){}
}