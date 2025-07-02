/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 02:22:14 by siuol             #+#    #+#             */
/*   Updated: 2025/07/02 13:11:24 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//OCF

Intern::Intern(){LOG_GREEN("Intern : Default constructor called");}

Intern::~Intern(){LOG_GREEN("Intern : Default destructor called");}

Intern::Intern(const Intern& other){LOG_GREEN("Intern : Copy constructor called");}

Intern& Intern::operator=(const Intern& other){LOG_GREEN("Intern : Copy assignment called");}

//Execution

AForm*  makeForm(const std::string& type, const std::string& target)
{
    
}