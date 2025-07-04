/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:17 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 16:19:06 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include  <fstream>

class ShrubberyCreationForm : public AForm
{
    public  :
        ShrubberyCreationForm() = delete;
        explicit ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm() override;
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other) = delete;

        virtual void    execute(const Bureaucrat& executor) const override;
        std::string    getTarget(void) const;

    private:
        std::string _target;
};
