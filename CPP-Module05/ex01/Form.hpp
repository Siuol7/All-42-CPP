/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 04:00:51 by siuol             #+#    #+#             */
/*   Updated: 2025/07/14 22:57:45 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    public  :
        //OCF
        Form() = delete;
        Form(const std::string& name, bool iSigned, unsigned int signGrade, unsigned int excGrade);
        ~Form();
        Form(const Form& other);
        Form&  operator=(const Form& other) = delete;

        //Exception
        class GradeTooLowException : public std::exception
        {
            public  :
                GradeTooLowException(const std::string& err);
                virtual const char* what() const noexcept override;

            private :
                const std::string   _err;
        };
        
        class GradeTooHighException : public std::exception
        {
            public  :
                GradeTooHighException(const std::string& err);
                virtual const char* what() const noexcept override;
            
            private :
                const std::string   _err;
        };
        
        //Getters
        const std::string&  getName() const;
        bool          getSigned() const;
        unsigned int  getSGrade() const;
        unsigned int  getEGrade() const;

        void    beSigned(const Bureaucrat& src);
        
    private :
        const std::string   _name;
        bool                _iSigned;
        const unsigned int  _signGrade;
        const unsigned int  _excGrade; 
};

std::ostream& operator<<(std::ostream &out, const Form& src);