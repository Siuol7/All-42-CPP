/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:24 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 01:22:12 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("SCF.default", 0, 145, 137),
                                                                    _target(target)
{LOG_GREEN("ShrubberyCreationForm : Constructor called");}

ShrubberyCreationForm::~ShrubberyCreationForm(){LOG_GREEN("ShrubberyCreationForm : Default destructor called");}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other),
                                                                                    _target(other._target)
{LOG_GREEN("ShrubberyCreationForm : Copy constructor called");}

