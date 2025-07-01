/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:59 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 16:19:09 by caonguye         ###   ########.fr       */
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
        std::string    getTarget(void) const;

    private:
        std::string _target;
};