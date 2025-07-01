/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:46 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 14:23:33 by caonguye         ###   ########.fr       */
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

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	AForm::execute(executor);
	std::cout << "Some drilling noises" << std::endl;
	std::cout << this->_target + " has been robotomized successfully 50% of the time." << std::endl;
}