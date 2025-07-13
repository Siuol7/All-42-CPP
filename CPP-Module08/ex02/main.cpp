/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 05:21:51 by siuol             #+#    #+#             */
/*   Updated: 2025/07/14 02:27:09 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
    LOG_GREEN("--INT Mutant Stack--");
    MutantStack<int> ms;

    ms.push(1);
    ms.push(2);
    ms.push(3);
    
    LOG_GREEN("---NORMAL---");
    auto bit = ms.begin();
    auto eit = ms.end();
    
    *bit = 9;
    *(eit - 1) = 10;
    for (auto i = bit; i != eit; i++)
        std::cout << "Value in mutant stack : " << *i << std::endl;

    std::cout << std::endl;
    LOG_GREEN("---REVERSE---");
    auto rbit = ms.rbegin();
    auto reit = ms.rend();
    
    *rbit = 9;
    *(reit - 1) = 10;
    for (auto i = bit; i != eit; i++)
        std::cout << "Value in mutant stack : " << *i << std::endl;

    std::cout << std::endl;
        
    LOG_GREEN("--STR Mutant Stack--");
    MutantStack<std::string> mstr;

    mstr.push("a");
    mstr.push("b");
    mstr.push("c");
    
    LOG_GREEN("---NORMAL---");
    auto bitr = mstr.begin();
    auto eitr = mstr.end();
    
    *bitr = "e";
    *(eitr - 1) = "f";
    for (auto i = bitr; i != eitr; i++)
        std::cout << "Value in mutant stack : " << *i << std::endl;

    std::cout << std::endl;
    LOG_GREEN("---REVERSE---");
    auto rbitr = mstr.rbegin();
    auto reitr = mstr.rend();
    
    *rbitr = "e";
    *(reitr - 1) = "f";
    for (auto i = bitr; i != eitr; i++)
        std::cout << "Value in mutant stack : " << *i << std::endl;
}
