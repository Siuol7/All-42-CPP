/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 18:31:51 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat                  A("A" , 2);
        ShrubberyCreationForm       SCF1("SCF1");
        std::cout << A << std::endl;
        std::cout << SCF1;
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