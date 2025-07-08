/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:17:41 by siuol             #+#    #+#             */
/*   Updated: 2025/07/08 14:11:05 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
    LOG_GREEN("--SWAPPING INT--");
    int a = 1;
    int b = 2;
    swap(a, b);
    std::cout << "a = " << a << std::endl << "b = " << b << std::endl;;
    
    std::cout << std::endl;
    
    LOG_GREEN("--SWAPPING STR--");
    std::string a1 = "a";
    std::string b1 = "b";
    swap(a1, b1);
    std::cout << "a1 = " << a1 << std::endl << "b1 = " << b1 << std::endl;;

    std::cout << std::endl;
    
    LOG_GREEN("--MIN INT--");
    int a2 = 1;
    int b2 = 2;
    std::cout << "min = " << min(a2, b2) << std::endl;;

    std::cout << std::endl;
    
    LOG_GREEN("--MIN FLOAT--");
    float a3 = 1.5;
    float b3 = -2.3;
    std::cout << "min = " << min(a3, b3) << std::endl;

    std::cout << std::endl;
    
    LOG_GREEN("--MAX INT--");
    int a4 = 1;
    int b4 = 2;
    std::cout << "max = " << max(a4, b4) << std::endl;;

    std::cout << std::endl;
    
    LOG_GREEN("--MAX FLOAT--");
    float a5 = 1.5;
    float b5 = -2.3;
    std::cout << "max = " << max(a5, b5);
    
}