/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/06/27 09:49:22 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  A("A" , 2);
    Bureaucrat  B("B", 149);
    Bureaucrat  C("C", 0);
    Bureaucrat  D("D", 151);

    try
    {
        A.getName();
        A.getGrade();
        A.gradeIncrement();
        A.getGrade();
        A.gradeIncrement();
        A.getGrade();
        A.gradeIncrement();
        A.getGrade();
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
    
    try
    {
        B.getName();
        B.getGrade();
        B.gradeIncrement();
        B.getGrade();
        B.gradeIncrement();
        B.getGrade();
        B.gradeIncrement();
        B.getGrade();
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }

    try
    {
        C.getName();
        C.getGrade();
        C.gradeIncrement();
        C.getGrade();
        C.gradeIncrement();
        C.getGrade();
        C.gradeIncrement();
        C.getGrade();
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }

    try
    {
        D.getName();
        D.getGrade();
        D.gradeIncrement();
        D.getGrade();
        D.gradeIncrement();
        D.getGrade();
        D.gradeIncrement();
        D.getGrade();
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
}