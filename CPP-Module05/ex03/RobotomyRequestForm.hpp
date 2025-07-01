/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:37 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 16:19:09 by caonguye         ###   ########.fr       */
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
        std::string    getTarget(void) const;

    private:
        std::string _target;
};