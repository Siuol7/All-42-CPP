/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:09:54 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/12 11:16:04 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Undefined ClapTrap"),
					_hit_points(10),
					_energy_points(10),
					_attack_damage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),
					_hit_points(10),
					_energy_points(10),
					_attack_damage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){std::cout << "Default ClapTrap destructor called" << std::endl;}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& other)
{
	std::cout << "Copy assignment called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " has no energy points to attack" << std::endl;
	if (!this->_hit_points)
		std::cout << "ClapTrap " << this->_name << " has been defeated" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " caused " << this->_attack_damage << " points of DMG to " << target << std::endl;
		this->_energy_points--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hit_points)
		std::cout << "ClapTrap " << this->_name << " has been defeated" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " got attacked and took " << amount << " DMG!" << std::endl;
		if (amount > this->_hit_points)
			this->_hit_points = 0;
		else
			this->_hit_points -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " has no energy points to get repaired" << std::endl;
	if (!this->_hit_points)
		std::cout << "ClapTrap " << this->_name << " has been defeated" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " got repaired " << amount << " hit points!" << std::endl;
		if (amount + this->_hit_points > 10)
			this->_hit_points = 10;
		else
			this->_hit_points += amount;
	}
}