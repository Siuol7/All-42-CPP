/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 02:16:04 by siuol             #+#    #+#             */
/*   Updated: 2025/06/25 20:39:25 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Undefined")
{
    std::cout << "Character : Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
}

Character::Character(std::string name) : _name(name)
{
    std::cout << "Character : Constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
}

Character::~Character()
{
    std::cout << "Character : Default destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
    this->cleanStorage();
}

Character::Character(const Character& other)
{
    std::cout << "Character : Copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = nullptr;
    }
}

Character& Character::operator=(const Character& other)
{
    std::cout << "Character : Copy assignment called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
        {
            delete this->_inventory[i];
            if (other._inventory[i])
                this->_inventory[i] = other._inventory[i]->clone();
            else
                this->_inventory[i] = nullptr;
        }
    }
    return *this;
}

std::string const& Character::getName() const
{
    std::cout << "Character : getName() called" << std::endl;
    return this->_name;
}

void    Character::cleanStorage(void)
{
    for (int i = 0; i < this->_storageID; i++)
        delete this->_storage[i];
    delete [] this->_storage;   
}

void    Character::store(AMateria* m)
{
    if (this->_storageID == this->_storageSize)
    {
        this->_storageSize += 5;
        AMateria**  temp = new AMateria*[this->_storageSize];
        for (int i = 0; i < this->_storageID; i++)
            temp[i] = this->_storage[i];
        for (int i = this->_storageID + 1; i < this->_storageSize; i++)
            temp[i] = nullptr;
        delete [] this->_storage;
        this->_storage = temp;
    }
    this->_storage[this->_storageID++] = m;
}

void    Character::equip(AMateria* m)
{
    std::cout << "Character : equip() called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            return ;
        }
    }
    delete  m;
    m = nullptr;
}

void    Character::unequip(int idx)
{
    if (0 <= idx < 4 && this->_inventory[idx])
    {
        this->store(this->_inventory[idx]);
        this->_inventory[idx] = nullptr;
    }
}

