/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 22:10:57 by siuol             #+#    #+#             */
/*   Updated: 2025/06/29 11:23:11 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//OCF
Form::Form(const std::string& name, bool iSigned,
            unsigned int signGrade, unsigned int excGrade) :
            _name(name), _iSigned(iSigned),
            _signGrade(signGrade), _excGrade(excGrade)
{LOG_GREEN("Form : Default constructor called");}

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
    
}
