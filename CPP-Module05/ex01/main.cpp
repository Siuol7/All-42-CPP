/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/06/29 12:49:40 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat  A("A" , 2);
        Form        FA("FA", 0, 150, 151);
        std::cout << A << std::endl;
        std::cout << FA << std::endl;
        A.gradeIncrement();
        std::cout << A << std::endl;
        A.gradeIncrement();
        std::cout << A << std::endl;;
        A.gradeIncrement();
        std::cout << A << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
    
    try
    {
        Bureaucrat   B("B", 149);
        std::cout << B << std::endl;
        B.gradeDecrement();
        std::cout << B << std::endl;
        B.gradeDecrement();
        std::cout << B << std::endl;
        B.gradeDecrement();
        std::cout << B << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }

    try
    {
        Bureaucrat   C("C", 0);
        std::cout << C << std::endl;
        C.gradeIncrement();
        std::cout << C << std::endl;
        C.gradeIncrement();
        std::cout << C << std::endl;
        C.gradeIncrement();
        std::cout << C << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }

    try
    {
        Bureaucrat   D("D", 151);
        std::cout << D << std::endl;
        D.gradeIncrement();
        std::cout << D << std::endl;
        D.gradeIncrement();
        std::cout << D << std::endl;
        D.gradeIncrement();
        std::cout << D << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
}