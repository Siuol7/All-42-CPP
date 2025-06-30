/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:59 by siuol             #+#    #+#             */
/*   Updated: 2025/06/30 11:27:58 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public  :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string name, bool iSigned, unsigned int signGrade, unsigned int excGrade);
        virtual ~PresidentialPardonForm() override;
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

        virtual void    execute(const Bureaucrat& executor) const override;

    private:
        std::string _target;
};