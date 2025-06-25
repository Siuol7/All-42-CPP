/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:02:05 by siuol             #+#    #+#             */
/*   Updated: 2025/06/25 14:01:04 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource : Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource : Default destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout << "MateriaSource : Copy constructor called" << std::endl;
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
    std::cout << "MateriaSource : Copy assignment called" << std::endl;
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
}