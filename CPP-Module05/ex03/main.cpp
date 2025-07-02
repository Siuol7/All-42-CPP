/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/07/03 00:13:16 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try
    {
        Bureaucrat  A("A" , 30);
        Intern      I;
        AForm       *SCF1 = I.makeForm("ShrubberyCreationForm", "SCF1");
        AForm       *SCF2 = I.makeForm("ShrubberyCreationForm", "SCF2");
        AForm       *RRF1 = I.makeForm("RobotomyRequestForm", "RRF1");
        AForm       *RRF2 = I.makeForm("RobotomyRequestForm", "RRF2");
        AForm       *PPF1 = I.makeForm("PresidentialPardonForm", "PPF1");
        AForm       *PPF2 = I.makeForm("PresidentialPardonForm", "PPF2");
        std::cout << std::endl;
        std::cout << A << std::endl;
        std::cout << std::endl;
        A.signForm(*SCF1);
        A.executeForm(*SCF1);
        A.executeForm(*SCF2);
        std::cout << std::endl;
        A.signForm(*RRF1);
        A.executeForm(*RRF1);
        A.executeForm(*RRF2);
        std::cout << std::endl;
        A.signForm(*PPF1);
        A.executeForm(*PPF1);
        A.executeForm(*PPF2);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
}