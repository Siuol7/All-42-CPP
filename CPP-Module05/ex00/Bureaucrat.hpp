/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:05:16 by siuol             #+#    #+#             */
/*   Updated: 2025/06/26 23:28:20 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cout << "\033[31m" << msg << "\033[0m" << std::endl

class Bureaucrat
{
    public  :
        Bureaucrat() = delete;
        Bureaucrat(const std::string name, unsigned int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);

        class GradeTooHighException : public std::exception
        {
            GradeTooHighException(std::string err);
            virtual const char* what() const noexcept override;
        };
        
        class GradeTooLowException  : public std::exception
        {
            GradeTooLowException(std::string err);
            virtual const char* what() const noexcept override;
        };

        const std::string&   getName() const;
        unsigned int        getGrade() const;
        void                gradeIncrement();
        void                gradeDecrement();
        
    private :
        const std::string _name;
        unsigned int _grade;
};