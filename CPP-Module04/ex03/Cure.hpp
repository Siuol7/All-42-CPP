/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:16:29 by siuol             #+#    #+#             */
/*   Updated: 2025/06/25 00:32:03 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        Cure(std::string const& type);
        virtual ~Cure() override;
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        
        virtual Cure*   clone() const override;
        virtual void    use(ICharacter& target) override; 
};