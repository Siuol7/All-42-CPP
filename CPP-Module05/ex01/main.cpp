/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/07/03 00:14:13 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat  A("A" , 2);
        Form        FA("FA", 0, 1, 150);
        std::cout << std::endl;
        std::cout << A << std::endl;
        std::cout << FA;
        A.signForm(FA);
        A.gradeIncrement();
        std::cout << A << std::endl;
        A.signForm(FA);
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
}