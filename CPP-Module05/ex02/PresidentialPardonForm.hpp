/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:59 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 01:31:16 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public  :
        PresidentialPardonForm() = delete;
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm() override;
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other) = delete;

        virtual void    execute(const Bureaucrat& executor) const override;

    private:
        std::string _target;
};