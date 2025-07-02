/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/07/03 00:14:49 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat  A("A" , 2);
        std::cout << std::endl;
        std::cout << A << std::endl;
        A.gradeIncrement();
        std::cout << A << std::endl;
        A.gradeIncrement();
        std::cout << A << std::endl;;
        A.gradeIncrement();
        std::cout << A << std::endl;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
    
    try
    {
        Bureaucrat   B("B", 149);
        std::cout << std::endl;
        std::cout << B << std::endl;
        B.gradeDecrement();
        std::cout << B << std::endl;
        B.gradeDecrement();
        std::cout << B << std::endl;
        B.gradeDecrement();
        std::cout << B << std::endl;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }

    try
    {
        Bureaucrat   C("C", 0);
        std::cout << std::endl;
        std::cout << C << std::endl;
        C.gradeIncrement();
        std::cout << C << std::endl;
        C.gradeIncrement();
        std::cout << C << std::endl;
        C.gradeIncrement();
        std::cout << C << std::endl;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }

    try
    {
        Bureaucrat   D("D", 151);
        std::cout << std::endl;
        std::cout << D << std::endl;
        D.gradeIncrement();
        std::cout << D << std::endl;
        D.gradeIncrement();
        std::cout << D << std::endl;
        D.gradeIncrement();
        std::cout << D << std::endl;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
}