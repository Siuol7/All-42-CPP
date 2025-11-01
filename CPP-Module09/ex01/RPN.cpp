/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:20:16 by siuol             #+#    #+#             */
/*   Updated: 2025/11/01 15:04:29 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//OCF

RPN::RPN(){};

RPN::~RPN(){};

//RPN::RPN(const RPN& other){};

//RPN& RPN::operator=(const RPN& other){};

static bool digitCheck(const std::string& token)
{
    std::regex form("^-?[0-9]$");
    if (!std::regex_match(token, form))
        throw std::runtime_error("Error : Only support input [-9 -> 9] not " + token);
    try
    {
        int value = std::stoi(token);
        (void) value;
    }
    catch(const std::exception& e)
    {
        throw std::runtime_error("Error : Invalid token " + token);
    }
    return true;
}

static bool operatorCheck(const std::string& token)
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

static int cal(int a, int b, const std::string& op)
{
    long long res;
    res = 0;
    for (int i = 0; i < 4; i++)
    {
        if (op == type[i])
        {
            res =  typeCal[i](a , b);
            if (res < INT32_MIN || res > INT32_MAX)
                throw std::runtime_error("Error : Calculation's result out range");
            break;
        }
        if (i == 3)
            throw std::runtime_error("Error : No operator matches");
    }
    return (int)res;
}

void    RPN::calculateRPN(const std::string& exp)
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
            res = cal(a, b, token);
            this->_stack.push(res);
        }
        else
        {            
            digitCheck(token);
            this->_stack.push(std::stoi(token));
        }
    }
    if (this->_stack.size() > 1)
        throw std::runtime_error("Error : Stack has more than one element to get result");
    else if (this->_stack.empty())
        throw std::runtime_error("Error : Stack has no element to get result");
    std::cout << this->_stack.top() << std::endl;
}