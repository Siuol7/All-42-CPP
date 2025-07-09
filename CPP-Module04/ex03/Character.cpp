/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 02:16:04 by siuol             #+#    #+#             */
/*   Updated: 2025/07/09 15:48:17 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Undefined"), _storageSize(4), _storageID(0)
{
    LOG_GREEN("Character : Default constructor called");
    this->_storage = new AMateria*[this->_storageSize];
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = nullptr;
        this->_storage[i] = nullptr;
    } 
}

Character::Character(std::string name) : _name(name), _storageSize(4), _storageID(0)
{
    LOG_GREEN("Character : Constructor called");
    this->_storage = new AMateria*[this->_storageSize];
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = nullptr;
        this->_storage[i] = nullptr;
    } 
}

Character::~Character()
{
    LOG_GREEN("Character : Default destructor called");
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
    this->cleanStorage();
}

Character::Character(const Character& other) :  _name(other._name),
                                                _storageSize(other._storageSize),
                                                _storageID(other._storageID)
{
    LOG_GREEN("Character : Copy constructor called");
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = nullptr;
    }
    this->_storage = new AMateria*[other._storageSize];
    for (uint i = 0; i < other._storageSize; i++)
    {
        if (other._storage[i])
            this->_storage[i] = other._storage[i]->clone();
        else
            this->_storage[i] = nullptr;
    }
}

Character& Character::operator=(const Character& other)
{
    LOG_GREEN("Character : Copy assignment called");
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
        this->cleanStorage();
        this->_storageSize = other._storageSize;
        this->_storageID = other._storageID;
        this->_storage = new AMateria*[other._storageSize];
        for (uint i = 0; i < other._storageSize; i++)
        {
            if (other._storage[i])
                this->_storage[i] = other._storage[i]->clone();
            else
                this->_storage[i] = nullptr;
        }
    }
    return *this;
}

std::string const& Character::getName() const
{
    LOG_GREEN("Character : getName() called");
    return this->_name;
}

void    Character::cleanStorage(void)
{
    for (uint i = 0; i < this->_storageID; i++)
        delete this->_storage[i];
    delete [] this->_storage;   
}

void    Character::store(AMateria* m)
{
    if (this->_storageID == this->_storageSize)
    {
        this->_storageSize += 5;
        AMateria**  temp = new AMateria*[this->_storageSize];
        for (uint i = 0; i < this->_storageID; i++)
            temp[i] = this->_storage[i];
        for (uint i = this->_storageID + 1; i < this->_storageSize; i++)
            temp[i] = nullptr;
        delete [] this->_storage;
        this->_storage = temp;
    }
    this->_storage[this->_storageID++] = m;
}

void    Character::equip(AMateria* m)
{
    LOG_GREEN("Character : equip() called");
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            return ;
        }
    }
    LOG_RED("Character : Inventory is full");
    delete  m;
    m = nullptr;
}

void    Character::unequip(int idx)
{
    LOG_GREEN("Character : unequip() called");
    if (0 <= idx && idx < 4 && this->_inventory[idx])
    {
        this->store(this->_inventory[idx]);
        this->_inventory[idx] = nullptr;
    }
}

void    Character::use(int idx, ICharacter& target)
{
    LOG_GREEN("Character : use() called");
    if (0 <= idx && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}