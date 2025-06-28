/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/06/27 09:56:29 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat  A("A" , 2);
        std::cout << "Bureaucrat " << A.getName();
        std::cout << " with " << A.getGrade() << std::endl;
        A.gradeIncrement();
        std::cout << "Bureaucrat " << A.getName();
        std::cout << " with " << A.getGrade() << std::endl;
        A.gradeIncrement();
        std::cout << "Bureaucrat " << A.getName();
        std::cout << " with " << A.getGrade() << std::endl;
        A.gradeIncrement();
        std::cout << "Bureaucrat " << A.getName();
        std::cout << " with " << A.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
    
    try
    {
        Bureaucrat   B("B", 149);
        std::cout << "Bureaucrat " << B.getName();
        std::cout << " with " << B.getGrade() << std::endl;
        B.gradeDecrement();
        std::cout << "Bureaucrat " << B.getName();
        std::cout << " with " << B.getGrade() << std::endl;
        B.gradeDecrement();
        std::cout << "Bureaucrat " << B.getName();
        std::cout << " with " << B.getGrade() << std::endl;
        B.gradeDecrement();
        std::cout << "Bureaucrat " << B.getName();
        std::cout << " with " << B.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }

    try
    {
        Bureaucrat   C("C", 0);
        std::cout << "Bureaucrat " << C.getName();
        std::cout << " with " << C.getGrade() << std::endl;
        C.gradeIncrement();
        std::cout << "Bureaucrat " << C.getName();
        std::cout << " with " << C.getGrade() << std::endl;
        C.gradeIncrement();
        std::cout << "Bureaucrat " << C.getName();
        std::cout << " with " << C.getGrade() << std::endl;
        C.gradeIncrement();
        std::cout << "Bureaucrat " << C.getName();
        std::cout << " with " << C.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }

    try
    {
        Bureaucrat   D("D", 151);
        std::cout << "Bureaucrat " << D.getName();
        std::cout << " with " << D.getGrade() << std::endl;
        D.gradeIncrement();
        std::cout << "Bureaucrat " << D.getName();
        std::cout << " with " << D.getGrade() << std::endl;
        D.gradeIncrement();
        std::cout << "Bureaucrat " << D.getName();
        std::cout << " with " << D.getGrade() << std::endl;
        D.gradeIncrement();
        std::cout << "Bureaucrat " << D.getName();
        std::cout << " with " << D.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
}