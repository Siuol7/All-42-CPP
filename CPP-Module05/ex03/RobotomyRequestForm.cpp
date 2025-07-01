/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:46 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 19:21:28 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 0, 72, 45),
                                                                    _target(target)
{LOG_GREEN("RobotomyRequestForm : Constructor called");}

RobotomyRequestForm::~RobotomyRequestForm(){LOG_GREEN("RobotomyRequestForm : Default destructor called");}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other),
                                                                                    _target(other._target)
{LOG_GREEN("RobotomyRequestForm : Copy constructor called");}

std::string    RobotomyRequestForm::getTarget(void) const
{return this->_target;}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	AForm::execute(executor);
	std::cout << "Some drilling noises" << std::endl;
	std::cout << this->_target + " has been robotomized successfully 50% of the time." << std::endl;
}