/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:19:02 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/01 11:00:33 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	LOG_GREEN("ScavTrap : Default constructor called");
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	LOG_GREEN("ScavTrap : Default constructor called");
}

ScavTrap::~ScavTrap(){LOG_GREEN("ScavTrap : Default destructor called");}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	LOG_GREEN("ScavTrap : Copy constructor called");
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	LOG_GREEN("ScavTrap : Copy assignment called");
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->_energy_points)
		std::cout << "ScavTrap " << this->_name << " has no energy points to attack" << std::endl;
	else if (!this->_hit_points)
		std::cout << "ScavTrap " << this->_name << " has been defeated" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " caused " << this->_attack_damage << " points of DMG to " << target << std::endl;
		this->_energy_points--;
	}
}

void	ScavTrap::guardGate()
{
	if (!this->_hit_points)
		std::cout << "ScavTrap " << this->_name << " has been defeated" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is on Gate keeper mode" << std::endl;
}