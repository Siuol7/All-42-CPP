/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:19:02 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/13 09:36:55 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap() : _name("Undefined ScravTrap"),
						_hit_points(100),
						_energy_points(50),
						_attack_damage(20)
{std::cout << "Default ScravTrap constructor called" << std::endl;}

ScravTrap::ScravTrap(std::string name) :
						_name(name.empty() ? "Undefined ScravTrap" : name),
						_hit_points(100),
						_energy_points(50),
						_attack_damage(20)
{std::cout << "Default ScravTrap constructor called" << std::endl;}

ScravTrap::~ScravTrap(){std::cout << "Default ScravTrap destructor called" << std::endl;}

ScravTrap::ScravTrap(const ScravTrap& other) : ClapTrap(other)
{
	std::cout << "Copy ScravTrap constructor called" << std::endl;
}

ScravTrap& ScravTrap::operator=(const ScravTrap& other)
{
	std::cout << "Copy ScravTrap assignment called" << std::endl;
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