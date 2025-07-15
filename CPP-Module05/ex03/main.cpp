/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/07/16 01:01:29 by siuol            ###   ########.fr       */
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
    AForm       *SCF1 = nullptr;
    AForm       *SCF2 = nullptr;
    AForm       *RRF1 = nullptr;
    AForm       *RRF2 = nullptr;
    AForm       *PPF1 = nullptr;
    AForm       *PPF2 = nullptr;
    AForm       *wrong = nullptr;
    try
    {
        Bureaucrat  A("A" , 30);
        Intern      I;
        SCF1 = I.makeForm("ShrubberyCreationForm", "SCF1");
        SCF2 = I.makeForm("ShrubberyCreationForm", "SCF2");
        RRF1 = I.makeForm("RobotomyRequestForm", "RRF1");
        RRF2 = I.makeForm("RobotomyRequestForm", "RRF2");
        PPF1 = I.makeForm("PresidentialPardonForm", "PPF1");
        PPF2 = I.makeForm("PresidentialPardonForm", "PPF2");
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
        wrong = I.makeForm("nonsense", "nonsense");
        if (wrong != nullptr)
            A.signForm(*wrong);
        delete SCF1;
        delete SCF2;
        delete RRF1;
        delete RRF2;
        delete PPF1;
        delete PPF2;
        delete wrong;
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
        delete SCF1;
        delete SCF2;
        delete RRF1;
        delete RRF2;
        delete PPF1;
        delete PPF2;
        delete wrong;
    }
}