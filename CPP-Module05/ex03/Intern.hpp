/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 02:22:10 by siuol             #+#    #+#             */
/*   Updated: 2025/07/02 12:11:53 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <functional>
#include "AForm.hpp"

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cerr << "\033[31m" << msg << "\033[0m" << std::endl

class Intern
{
    public  :
        Intern();
        ~Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);

        AForm*  makeForm(const std::string& type, const std::string& target);

    private :
        static const std::string    _formType[];
        static std::function<AForm*(const std::string& type)> _formMaker[];
};