/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 22:10:57 by siuol             #+#    #+#             */
/*   Updated: 2025/06/28 23:09:43 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, bool iSigned,
            unsigned int signGrade, unsigned int excGrade) :
            _name(name), _iSigned(iSigned),
            _signGrade(signGrade), _excGrade(excGrade)
{LOG_GREEN("Form : Default constructor called");}

Form::~Form(){LOG_GREEN("Form : Default destructor called");}

Form::Form(const Form& other) : _
{LOG_GREEN("Form : Copy constructor called");}
