/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 13:40:23 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat  A("A" , 2);
        AForm        AF1("FA", 0, 1, 150);
        std::cout << A << std::endl;
        std::cout << AF1;
        A.signForm(FA);
        A.gradeIncrement();
        std::cout << A << std::endl;
        A.signForm(FA);
        A.gradeIncrement();
        std::cout << A << std::endl;;
        A.gradeIncrement();
        std::cout << A << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
}