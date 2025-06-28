/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 04:00:51 by siuol             #+#    #+#             */
/*   Updated: 2025/06/28 04:43:50 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cerr << "\033[31m" << msg << "\033[0m" << std::endl

class Form
{
    public  :
        Form();
        ~Form();
        Form(const Form& other);
        Form&  operator=(const Form& other);

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
        
        
        
    private :
        const std::string   _name;
        bool                _signed;
        const unsigned int  _signGrade;
        const unsigned int  _excGrade; 
};