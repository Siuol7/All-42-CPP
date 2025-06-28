/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 04:00:51 by siuol             #+#    #+#             */
/*   Updated: 2025/06/28 05:29:34 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form
{
    public  :
        //OCF
        Form();
        ~Form();
        Form(const Form& other);
        Form&  operator=(const Form& other);

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
        const bool          getSigned() const;
        const unsigned int  getSGrade() const;
        const unsigned int  getEGrade() const;

        void    beSigned(const Bureaucrat& src);
        
    private :
        const std::string   _name;
        bool                _signed;
        const unsigned int  _signGrade;
        const unsigned int  _excGrade; 
};

std::ostream& operator<<(std::ostream &out, const Form& src);