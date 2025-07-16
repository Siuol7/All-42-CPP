/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:20:16 by siuol             #+#    #+#             */
/*   Updated: 2025/07/17 00:21:07 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//OCF

RPN::RPN(){};

RPN::~RPN(){};

//RPN::RPN(const RPN& other){};

//RPN& RPN::operator=(const RPN& other){};

static bool digitCheck(std::string token)
{
    int  value;
    std::regex form("^-?[0-9]$");
    if (!std::regex_match(token, form))
        throw std::runtime_error("Error : Invalid token " + token);
    try 
    {
        value = std::stoi(token);   
    }
    catch(std::exception& e)
    {
        throw std::runtime_error("Error : Inavalid token " + token);
    }
    if (-9 > value || value >9)
        throw std::runtime_error("Error : Out support range (-9 -> 9)");
    return true;
}

static bool operatorCheck(std::string token)
{
    if (token == "+" || token == "-" || token == "*" || token =="/")
        return true;
    return false;
}

static std::string type[]{"+", "-", "*", "/"};

static std::function<int(int a, int b)> typeCal[]
{
    [](int a, int b){return a + b;},
    [](int a, int b){return a - b;},
    [](int a, int b){return a * b;},
    [](int a, int b)
    {
        if (b == 0)
            throw std::runtime_error("Error : Calculation's result out range");
        return a / b;
    }   
};

static int cal(int a, int b, std::string op)
{
    int res;
    for (int i = 0; i < 4; i++)
    {
        if (op == type[i])
        {
            try
            {
                res =  typeCal[i](a , b);
                if (std::isnan(res) || std::isinf(res))
                    throw std::runtime_error("Error : Calculation's result out range");
            }
            catch(const std::exception& e)
            {
                throw ;
            }
            
        }
    }
    return res;
}

void    RPN::calculateRPN(std::string exp)
{
    std::istringstream  input(exp);
    std::string         token;
    int res;
    
    
    while (input >> token)
    {
        if (operatorCheck(token))
        {
            if (this->_stack.size() < 2)
            throw std::runtime_error("Error : Not enough element for calculation");
            int b = this->_stack.top();
            this->_stack.pop();
            int a =  this->_stack.top();
            this->_stack.pop();
            try
            {
                res = cal(a, b, token);
                this->_stack.push(res);
            }
            catch(const std::exception& e)
            {
                throw;
            }
        }
        else
        {            
            try
            {
                digitCheck(token);
                this->_stack.push(std::stod(token));
            }
            catch(const std::exception& e)
            {
                throw ;
            }
        }
    }
    if (this->_stack.size() > 1)
        throw std::runtime_error("Error : Stack has more than one element to get result");
    std::cout << this->_stack.top() << std::endl;
}