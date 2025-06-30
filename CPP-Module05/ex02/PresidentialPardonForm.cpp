/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:43:06 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 01:44:08 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PPF.default", 0, 25, 5),
                                                                    _target(target)
{LOG_GREEN("PresidentialPardonForm : Constructor called");}

PresidentialPardonForm::~PresidentialPardonForm(){LOG_GREEN("PresidentialPardonForm : Default destructor called");}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other),
                                                                                    _target(other._target)
{LOG_GREEN("PresidentialPardonForm : Copy constructor called");}