/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:43:06 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 19:21:40 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 0, 25, 5),
                                                                    _target(target)
{LOG_GREEN("PresidentialPardonForm : Constructor called");}

PresidentialPardonForm::~PresidentialPardonForm(){LOG_GREEN("PresidentialPardonForm : Default destructor called");}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other),
                                                                                    _target(other._target)
{LOG_GREEN("PresidentialPardonForm : Copy constructor called");}

std::string    PresidentialPardonForm::getTarget(void) const
{return this->_target;}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    AForm::execute(executor);
    std::cout << this->_target + " has been pardoned by Zaphod Beeblebrox." << std::endl;
}