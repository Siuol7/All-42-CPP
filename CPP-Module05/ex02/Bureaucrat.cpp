/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:25:23 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 23:42:22 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

//Excption
Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& err) : _err(err){}

const char* Bureaucrat::GradeTooHighException::what() const noexcept{return this->_err.c_str();}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& err) : _err(err){}

const char* Bureaucrat::GradeTooLowException::what() const noexcept{return this->_err.c_str();}

//OCF
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


//Getter
const std::string& Bureaucrat::getName() const{return this->_name;}

unsigned int Bureaucrat::getGrade() const{return this->_grade;}


//Execution
static  std::string formType(const AForm& form)
{
    if (const ShrubberyCreationForm* scf = dynamic_cast<const ShrubberyCreationForm*>(&form))
        return ("ShrubberyCreationForm -" + scf->getTarget());
    if (const RobotomyRequestForm* rbt = dynamic_cast<const RobotomyRequestForm*>(&form))
        return ("RobotomyRequestForm - " + rbt->getTarget());
    if (const PresidentialPardonForm* ppr = dynamic_cast<const PresidentialPardonForm*>(&form))
        return ("PresidentialPardonForm - " + ppr->getTarget());
    return "UndefinedForm"; 
}

void    Bureaucrat::signForm(AForm& form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << formType(form) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(const AForm& form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << formType(form) << std::endl;
    }
    catch (std::exception& e)
    {
        LOG_RED(e.what());
    } 
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src)
{
    out << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
    return out;
}