/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:58:21 by siuol             #+#    #+#             */
/*   Updated: 2025/06/27 08:55:18 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "system.hpp"
#include "ICharacter.hpp"

class AMateria
{
    public :
        AMateria();
        AMateria(std::string const &type);
        virtual ~AMateria();
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria& other);
        
        std::string const& getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected :
        std::string _type;
};