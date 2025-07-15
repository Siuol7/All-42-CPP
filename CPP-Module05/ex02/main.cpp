/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/07/16 01:00:08 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    AForm       *SCF1 = nullptr;
    AForm       *SCF2 = nullptr;
    AForm       *RRF1 = nullptr;
    AForm       *RRF2 = nullptr;
    AForm       *PPF1 = nullptr;
    AForm       *PPF2 = nullptr;
    try
    {
        Bureaucrat                  A("A" , 30);
        SCF1 = new ShrubberyCreationForm("SCF1");
        SCF2 = new ShrubberyCreationForm("SCF2");
        RRF1 = new RobotomyRequestForm("RRF1");
        RRF2 = new RobotomyRequestForm("RRF2");
        PPF1 = new PresidentialPardonForm("PPF1");
        PPF2 = new PresidentialPardonForm("PPF2");
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
        delete SCF1;
        delete SCF2;
        delete RRF1;
        delete RRF2;
        delete PPF1;
        delete PPF2;
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
    }
}