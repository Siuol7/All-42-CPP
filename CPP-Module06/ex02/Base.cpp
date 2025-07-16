/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 22:52:29 by siuol             #+#    #+#             */
/*   Updated: 2025/07/16 14:10:37 by caonguye         ###   ########.fr       */
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
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return ;
    }
    catch (std::exception& e){}

    try
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
        return ;
    }
    catch (std::exception& e){}

    try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
        return ;
    }
    catch (std::exception& e){}
}