/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 22:10:57 by siuol             #+#    #+#             */
/*   Updated: 2025/06/29 12:35:08 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

static unsigned int gradeCheck(unsigned int grade, const std::string& type)
{
    if (grade < 1)
        throw Form::GradeTooLowException(type + "Grade : Too low");
    else if (grade > 150)
        throw Form::GradeTooHighException(type + "Grade : Too high");
    return grade;
}

//OCF
Form::Form(const std::string& name, bool iSigned,
            unsigned int signGrade, unsigned int excGrade) :
            _name(name), _iSigned(iSigned)
{
    LOG_GREEN("Form : Default constructor called");
    this->_signGrade = gradeCheck(signGrade, "Required to Sign");
    this->_excGrade = gradeCheck(excGrade, "Required to Execute");
}

Form::~Form(){LOG_GREEN("Form : Default destructor called");}

Form::Form(const Form& other) : _name(other._name), _iSigned(other._iSigned),
                                _signGrade(other._signGrade), _excGrade(other._excGrade)
{LOG_GREEN("Form : Copy constructor called");}

//Exception
Form::GradeTooLowException::GradeTooLowException(const std::string& err) : _err(err){}

const char* Form::GradeTooLowException::what() const noexcept
{
    return this->_err.c_str();
}

Form::GradeTooHighException::GradeTooHighException(const std::string& err) : _err(err){}

const char* Form::GradeTooHighException::what() const noexcept
{
    return this->_err.c_str();
}

//Getters
const std::string&  Form::getName() const{return this->_name;}

bool    Form::getSigned() const{return this->_iSigned;}

unsigned int    Form::getSGrade() const{return this->_signGrade;}

unsigned int    Form::getEGrade() const{return this->_excGrade;}

void    Form::beSigned(const Bureaucrat& src)
{
    if (src.getGrade() > this->_signGrade)
        throw   Form::GradeTooLowException(src.getName() + "couldn't sign "
                                + this->_name + " because " + "Required to Sign Grade : Too low");
    this->_iSigned = true;
}
