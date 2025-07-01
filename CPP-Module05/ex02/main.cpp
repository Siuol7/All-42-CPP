/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/07/02 01:38:21 by siuol            ###   ########.fr       */
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
        Bureaucrat                  A("A" , 30);
        AForm       *SCF1 = new ShrubberyCreationForm("SCF1");
        AForm       *SCF2 = new ShrubberyCreationForm("SCF2");
        AForm       *RRF1 = new RobotomyRequestForm("RRF1");
        AForm       *RRF2 = new RobotomyRequestForm("RRF2");
        AForm       *PPF1 = new PresidentialPardonForm("PPF1");
        AForm       *PPF2 = new PresidentialPardonForm("PPF2");
        std::cout << A << std::endl;
        A.signForm(*SCF1);
        A.executeForm(*SCF1);
        A.executeForm(*SCF2);
        A.signForm(*RRF1);
        A.executeForm(*RRF1);
        A.executeForm(*RRF2);
        A.signForm(*PPF1);
        A.executeForm(*PPF1);
        A.executeForm(*PPF2);
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
}