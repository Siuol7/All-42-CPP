/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:07:01 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 19:04:20 by caonguye         ###   ########.fr       */
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
        Bureaucrat                  A("A" , 1);
        AForm       *SCF1 = new ShrubberyCreationForm("SCF1");
        std::cout << A << std::endl;
        std::cout << SCF1;
        A.signForm(*SCF1);
        A.executeForm(*SCF1);
    }
    catch(const std::exception& e)
    {
        LOG_RED(e.what());
    }
}