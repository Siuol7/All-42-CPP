/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:46 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 01:43:53 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RRF.default", 0, 72, 45),
                                                                    _target(target)
{LOG_GREEN("RobotomyRequestForm : Constructor called");}

RobotomyRequestForm::~RobotomyRequestForm(){LOG_GREEN("RobotomyRequestForm : Default destructor called");}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other),
                                                                                    _target(other._target)
{LOG_GREEN("RobotomyRequestForm : Copy constructor called");}