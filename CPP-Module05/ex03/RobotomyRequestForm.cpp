/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:46 by siuol             #+#    #+#             */
/*   Updated: 2025/07/15 00:04:02 by siuol            ###   ########.fr       */
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
	srand(time(NULL));
	if (rand()%100 %2 == 0)
		std::cout << this->_target << "'s robotomization completed" << std::endl;
	else
		std::cout << this->_target << "'s robotomization failed" << std::endl;
}