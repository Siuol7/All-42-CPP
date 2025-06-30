/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:37 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 01:31:27 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public  :
        RobotomyRequestForm() = delete;
        explicit RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm() override;
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other) = delete;

        virtual void    execute(const Bureaucrat& executor) const override;

    private:
        std::string _target;
};