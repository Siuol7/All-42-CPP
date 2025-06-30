/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:17 by siuol             #+#    #+#             */
/*   Updated: 2025/06/30 11:26:49 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public  :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name, bool iSigned, unsigned int signGrade, unsigned int excGrade);
        virtual ~ShrubberyCreationForm() override;
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

        virtual void    execute(const Bureaucrat& executor) const override;

    private:
        std::string _target;
};
