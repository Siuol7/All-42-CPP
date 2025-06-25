/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 02:16:04 by siuol             #+#    #+#             */
/*   Updated: 2025/06/25 13:23:01 by siuol            ###   ########.fr       */
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