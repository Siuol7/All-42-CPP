/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 22:10:57 by siuol             #+#    #+#             */
/*   Updated: 2025/06/30 00:25:38 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

static unsigned int gradeCheck(unsigned int grade, const std::string& type)
{
    if (grade < 1)
        throw AForm::GradeTooLowException(type + "Grade : Too low");
    else if (grade > 150)
        throw AForm::GradeTooHighException(type + "Grade : Too high");
    return grade;
}

//OCF
AForm::AForm(const std::string& name, bool iSigned,
            unsigned int signGrade, unsigned int excGrade) :
            _name(name), _iSigned(iSigned)
{
    LOG_GREEN("AForm : Default constructor called");
    this->_signGrade = gradeCheck(signGrade, "AForm " + name + " : Required to Sign");
    this->_excGrade = gradeCheck(excGrade, "AForm " + name + " : Required to Execute");
}

AForm::~AForm(){LOG_GREEN("AForm : Default destructor called");}

AForm::AForm(const AForm& other) : _name(other._name), _iSigned(other._iSigned),
                                _signGrade(other._signGrade), _excGrade(other._excGrade)
{LOG_GREEN("AForm : Copy constructor called");}

//Exception
AForm::GradeTooLowException::GradeTooLowException(const std::string& err) : _err(err){}

const char* AForm::GradeTooLowException::what() const noexcept
{
    return this->_err.c_str();
}

AForm::GradeTooHighException::GradeTooHighException(const std::string& err) : _err(err){}

const char* AForm::GradeTooHighException::what() const noexcept
{
    return this->_err.c_str();
}

//Getters
const std::string&  AForm::getName() const{return this->_name;}

bool    AForm::getSigned() const{return this->_iSigned;}

unsigned int    AForm::getSGrade() const{return this->_signGrade;}

unsigned int    AForm::getEGrade() const{return this->_excGrade;}

void    AForm::beSigned(const Bureaucrat& src)
{
    if (src.getGrade() > this->_signGrade)
        throw   AForm::GradeTooLowException(src.getName() + " couldn't sign "
                                + this->_name + " because " + "Required to Sign Grade : Too low");
    this->_iSigned = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& src)
{
    std::cout << "The " <<  src.getName() << " AForm is "
                << (src.getSigned() ? "signed " : "unsigned ")
                << "with required to sign grade : " << src.getSGrade()
                << " and required to execute grade : " << src.getEGrade()
                << std::endl; 
    return out;
}