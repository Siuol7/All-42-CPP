/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:19:02 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/16 14:09:14 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap() : ClapTrap()
{
	this->_name = "Undefined ScravTrap";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScravTrap : Default constructor called" << std::endl;
}

ScravTrap::ScravTrap(std::string name) : ClapTrap(name)
{
	this->_name = name.empty() ? "Undefined ScravTrap" : name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScravTrap : Default constructor called" << std::endl;
}

ScravTrap::~ScravTrap(){std::cout << "ScravTrap : Default destructor called" << std::endl;}

ScravTrap::ScravTrap(const ScravTrap& other) : ClapTrap(other)
{
	std::cout << "ScravTrap : Copy constructor called" << std::endl;
}

ScravTrap& ScravTrap::operator=(const ScravTrap& other)
{
	std::cout << "ScravTrap : Copy assignment called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

void	ScravTrap::attack(const std::string& target)
{
	if (!this->_energy_points)
		std::cout << "ScravTrap " << this->_name << " has no energy points to attack" << std::endl;
	else if (!this->_hit_points)
		std::cout << "ScravTrap " << this->_name << " has been defeated" << std::endl;
	else
	{
		std::cout << "ScravTrap " << this->_name << " caused " << this->_attack_damage << " points of DMG to " << target << std::endl;
		this->_energy_points--;
	}
}

void	ScravTrap::guardGate()
{
	if (!this->_hit_points)
		std::cout << "ScravTrap " << this->_name << " has been defeated" << std::endl;
	else
		std::cout << "ScravTrap " << this->_name << " is on Gate keeper mode" << std::endl;
}