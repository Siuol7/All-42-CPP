/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:25:23 by siuol             #+#    #+#             */
/*   Updated: 2025/06/26 23:35:38 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name),
                                                                    _grade(grade)
{LOG_GREEN("Bureaucrat : Default constructor called");}

Bureaucrat::~Bureaucrat(){LOG_GREEN("Bureaucrat : Default destructor called");}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name),
                                                _grade(other._grade)
{LOG_GREEN("Bureaucrat : Copy constructor called");}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    LOG_GREEN("Bureaucrat : Copy assignment called");
    if (this != &other)
        this->_grade = other._grade;
    return *this;
}
