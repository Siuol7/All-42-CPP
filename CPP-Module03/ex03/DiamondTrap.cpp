/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:03:54 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/08 14:22:42 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	LOG_GREEN("DiamondTrap : Default constructor called");
	this->_name = "Undefined DiamondTrap";
	ClapTrap::_name = "Undefined DM _clap_name";
	this->_hit_points =	FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage =	FragTrap::_attack_damage;
};

DiamondTrap::DiamondTrap(const std::string name) :	ClapTrap(name + "_clap_name"),
													FragTrap(name),
													ScavTrap(name),
													_name(name)
{
	LOG_GREEN("DiamondTrap : Constructor called");
	this->_hit_points =	FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage =	FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap(){LOG_GREEN("DiamondTrap : Default destructor called");}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other),
													FragTrap(other),
													ScavTrap(other)
{
	LOG_GREEN("DiamondTrap : Copy constructor called");
	this->_name = other._name;
	this->_hit_points =	FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage =	FragTrap::_attack_damage;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	LOG_GREEN("DiamondTrap : Copy assignment called");
	ClapTrap::operator=(other);
	FragTrap::operator=(other);
	ScavTrap::operator=(other);
	if(this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "DM ClapTrap name : " << this->ClapTrap::_name << std::endl;
}