/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 02:16:04 by siuol             #+#    #+#             */
/*   Updated: 2025/06/25 23:13:13 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Undefined"), _storageSize(4), _storageID(0)
{
    std::cout << "Character : Default constructor called" << std::endl;
    this->_storage = new AMateria*[this->_storageSize];
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = nullptr;
        this->_storage[i] = nullptr;
    } 
}

Character::Character(std::string name) : _name(name), _storageSize(4), _storageID(0)
{
    std::cout << "Character : Constructor called" << std::endl;
    this->_storage = new AMateria*[this->_storageSize];
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = nullptr;
        this->_storage[i] = nullptr;
    } 
}

Character::~Character()
{
    std::cout << "Character : Default destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
    this->cleanStorage();
}

Character::Character(const Character& other) :  _name(other._name),
                                                _storageSize(other._storageSize),
                                                _storageID(other._storageID)
{
    std::cout << "Character : Copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = nullptr;
    }
    this->_storage = new AMateria*[other._storageSize];
    for (int i = 0; i < other._storageSize; i++)
    {
        if (other._storage[i])
            this->_storage[i] = other._storage[i]->clone();
        else
            this->_storage[i] = nullptr;
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
        this->cleanStorage();
        this->_storageSize = other._storageSize;
        this->_storageID = other._storageID;
        this->_storage = new AMateria*[other._storageSize];
        for (int i = 0; i < other._storageSize; i++)
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
    std::cout << "Character : Inventory is full" << std::endl;
    delete  m;
    m = nullptr;
}

void    Character::unequip(int idx)
{
    std::cout << "Character : unequip() called" << std::endl;
    if (0 <= idx && idx < 4 && this->_inventory[idx])
    {
        this->store(this->_inventory[idx]);
        this->_inventory[idx] = nullptr;
    }
}

void    Character::use(int idx, ICharacter& target)
{
    std::cout << "Character : use() called" << std::endl;
    if (0 <= idx && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}