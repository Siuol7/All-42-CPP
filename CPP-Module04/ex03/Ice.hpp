/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:37:34 by siuol             #+#    #+#             */
/*   Updated: 2025/07/09 15:48:44 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice   : public AMateria
{
      public :
        Ice();
        Ice(std::string const& type);
        ~Ice() override;
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);

        virtual Ice* clone() const override;
        virtual void use(ICharacter& target) override;
};