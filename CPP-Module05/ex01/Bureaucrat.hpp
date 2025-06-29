/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:05:16 by siuol             #+#    #+#             */
/*   Updated: 2025/06/29 11:51:17 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cerr << "\033[31m" << msg << "\033[0m" << std::endl

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
            public :
                GradeTooHighException(const std::string& err);
                virtual const char* what() const noexcept override;

            private :
                const std::string _err;
        };
        
        class GradeTooLowException  : public std::exception
        {
            public :
                GradeTooLowException(const std::string& err);
                virtual const char* what() const noexcept override;

            private :
                const std::string _err;
        };

        const std::string&   getName() const;
        unsigned int        getGrade() const;
        void                gradeIncrement();
        void                gradeDecrement();
        
        void    signForm(Form& form) const;
        
    private :
        const std::string _name;
        unsigned int _grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src);