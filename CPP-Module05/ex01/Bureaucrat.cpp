/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:25:23 by siuol             #+#    #+#             */
/*   Updated: 2025/06/27 09:58:28 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& err) : _err(err){}

const char* Bureaucrat::GradeTooHighException::what() const noexcept{return this->_err.c_str();}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& err) : _err(err){}

const char* Bureaucrat::GradeTooLowException::what() const noexcept{return this->_err.c_str();}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name)
{
    LOG_GREEN("Bureaucrat : Default constructor called");
    if  (grade < 1)
        throw GradeTooHighException("Grade " + this->_name + " : Too high");
    else if (grade >150)
        throw GradeTooLowException("Grade " + this->_name + " : Too low");
    else
        this->_grade = grade;
}

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

void Bureaucrat::gradeIncrement()
{
    LOG_GREEN("Grade : Increase grade");
    if  (this->_grade - 1 < 1)
        throw GradeTooHighException("Grade " + this->_name + " : Too high");
    else
        this->_grade--;
}

void Bureaucrat::gradeDecrement()
{
    LOG_GREEN("Grade : Decrease grade");
    if  (this->_grade + 1 > 150)
        throw GradeTooLowException("Grade " + this->_name + " : Too low");
    else
        this->_grade++;
}

const std::string& Bureaucrat::getName() const{return this->_name;}

unsigned int Bureaucrat::getGrade() const{return this->_grade;}