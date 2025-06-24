/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 02:16:12 by siuol             #+#    #+#             */
/*   Updated: 2025/06/24 18:04:22 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public :
        Character();
        Character(std::string _name);
        ~Character();
        Character(const Character& other);
        Character& operator=(const Character& other);

        std::string const& getName() const override;
        void equip(AMateria* m) override;
        void unequip(int idx) override;
        void use(int idx, ICharacter& target) override;

    private :
        std::string _name;
        AMateria*    _inventory[4];
};
