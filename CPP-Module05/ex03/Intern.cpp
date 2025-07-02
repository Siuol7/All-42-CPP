/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 02:22:14 by siuol             #+#    #+#             */
/*   Updated: 2025/07/02 13:51:00 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//OCF

Intern::Intern(){LOG_GREEN("Intern : Default constructor called");}

Intern::~Intern(){LOG_GREEN("Intern : Default destructor called");}

Intern::Intern(const Intern& other){LOG_GREEN("Intern : Copy constructor called");}

Intern& Intern::operator=(const Intern& other){LOG_GREEN("Intern : Copy assignment called");}

//Execution

const std::string Intern::_formType[] = {
    "ShrubberyCreationForm",
    "RobotomyRequestForm",
    "PresidentialPardonForm"
};

std::function<AForm*(const std::string& target)>Intern::_formMaker[] = {
    [](const std::string& target){
        LOG_GREEN("Intern creates ShrubberyCreationForm");
        return new ShrubberyCreationForm(target);
    },
    [](const std::string& target){
        LOG_GREEN("Intern creates RobotomyRequestForm");
        return new RobotomyRequestForm(target);
    },
    [](const std::string& target){
        LOG_GREEN("Intern creates PresidentialPardonForm");
        return new PresidentialPardonForm(target);
    }
};

AForm*  Intern::makeForm(const std::string& type, const std::string& target)
{
    size_t  size = sizeof(this->_formType) / sizeof(this->_formType[0]);

    for (int i = 0; i < size; i++)
    {
        if (this->_formType[i] == type)
            return this->_formMaker[i](target);
    }
    LOG_RED("Intern cannot find form.");
    return nullptr;
}