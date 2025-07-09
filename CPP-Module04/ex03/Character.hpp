/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 02:16:12 by siuol             #+#    #+#             */
/*   Updated: 2025/07/09 15:47:00 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public :
        Character();
        Character(std::string _name);
        virtual ~Character() override;
        Character(const Character& other);
        Character& operator=(const Character& other);

        virtual std::string const& getName() const override;
        virtual void equip(AMateria* m) override;
        virtual void unequip(int idx) override;
        virtual void use(int idx, ICharacter& target) override;

        
    private :
        std::string     _name;
        uint             _storageSize;
        uint             _storageID;
        AMateria*       _inventory[4];
        AMateria**       _storage;
        
        void    cleanStorage(void);
        void    store(AMateria* m);
};
