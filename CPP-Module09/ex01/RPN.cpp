/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:20:16 by siuol             #+#    #+#             */
/*   Updated: 2025/07/16 14:15:04 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//OCF

RPN::RPN(){};

RPN::~RPN(){};

RPN::RPN(const RPN& other){};

RPN& RPN::operator=(const RPN& other){};

void    RPN::calculateRPN(std::string exp)
{
    std::istringstream  input;
    std::string         token;
    
    
    while (input >> token)
    {
         
    }
}