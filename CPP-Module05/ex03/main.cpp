/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/07/15 00:07:56 by siuol            ###   ########.fr       */
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
        
        if (SCF1 != nullptr)
        {
            A.signForm(*SCF1);
            A.executeForm(*SCF1);
        }
        if (SCF2 != nullptr)
            A.executeForm(*SCF2);
        std::cout << std::endl;
        
        if (RRF1 != nullptr)
        {
            A.signForm(*RRF1);
            A.executeForm(*RRF1);
        }
        if (RRF2 != nullptr)
            A.executeForm(*RRF2);
        std::cout << std::endl;

        if (PPF1 != nullptr)
        {
            A.signForm(*PPF1);
            A.executeForm(*PPF1);
        }
        if (PPF2 != nullptr)
            A.executeForm(*PPF2);
        std::cout << std::endl;

        LOG_GREEN("---FAIL CASE---");
        AForm   *wrong = I.makeForm("nonsense", "nonsense");
        if (wrong != nullptr)
            A.signForm(*wrong);
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
}