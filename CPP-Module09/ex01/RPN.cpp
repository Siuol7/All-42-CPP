/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:20:16 by siuol             #+#    #+#             */
/*   Updated: 2025/07/16 18:08:38 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//OCF

RPN::RPN(){};

RPN::~RPN(){};

RPN::RPN(const RPN& other){};

RPN& RPN::operator=(const RPN& other){};

static bool digitCheck(std::string token)
{
    double  value;
    try 
    {
        value = std::stod(token);   
    }
    catch(std::exception& e)
    {
        throw std::runtime_error("Error : Inavalid token" + token);
    }
    if (-9 > value || value >9)
        throw std::runtime_error("Error : Out support range (-9 -> 9)");
    return true
}

static bool operatorCheck(std::string token)
{
    if (token == "+" || token == "-" || token == "*" || token =="/")
        return true;
    return false;
}

static std::string type[]{"+", "-", "*", "/"};

static std::function<double(double a, double b)> typeCal[]
{
    [](double a, double b){return a + b;},
    [](double a, double b){return a - b;},
    [](double a, double b){return a * b;},
    [](double a, double b)
    {
        if (b == 0)
            throw std::runtime_error("Error : Calculation's result out range");
        return a / b;
    }   
};

static double cal(double a, double b, std::string op)
{
    for (int i = 0; i < 4; i++)
    {
        if (op == type[i])
        {
            try
            {
                double res =  typeCal[i](a , b);
                if (std::isnan(res) || std::isinf(res))
                    throw std::runtime_error("Error : Calculation's result out range");
                return res;
            }
            catch(const std::exception& e)
            {
                LOG_RED(e.what());
            }
            
        }
    }
}

void    RPN::calculateRPN(std::string exp)
{
    std::istringstream  input(exp);
    std::string         token;
    
    
    while (input >> token)
    {
        if (operatorCheck(token))
        {
            double b = this->_stack.top();
            this->_stack.pop();
            double a =  this->_stack.top();
            this->_stack.pop();
            try
            {
                double res = cal(a, b, token);
                std::cout << res << std::endl;
            }
            catch(const std::exception& e)
            {
                LOG_RED(e.what());
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
                LOG_RED(e.what());
                return;
            }
        }
    }
}