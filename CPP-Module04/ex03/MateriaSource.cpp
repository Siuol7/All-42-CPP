/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:02:05 by siuol             #+#    #+#             */
/*   Updated: 2025/07/09 15:49:27 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    LOG_GREEN("MateriaSource : Default constructor called");
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
    LOG_GREEN("MateriaSource : Default destructor called");
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    LOG_GREEN("MateriaSource : Copy constructor called");
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = nullptr; 
    }
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& other)
{
    LOG_GREEN("MateriaSource : Copy assignment called");
    if (this != &other)
    {
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

void    MateriaSource::learnMateria(AMateria* src)
{
    LOG_GREEN("MateriaSource : learnMateria() called");
    if (src == nullptr)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == nullptr)
        {
            this->_inventory[i] = src;
            return ;
        }
    }
    LOG_RED("MateriaSource : Inventory is full");
    delete src;
    src = nullptr;
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
    LOG_GREEN("MateriaSource : createMateria() called");
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != nullptr && this->_inventory[i]->getType() == type)
            return this->_inventory[i]->clone();
    }
    return nullptr;
}