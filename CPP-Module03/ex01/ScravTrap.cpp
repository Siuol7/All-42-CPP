/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:19:02 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/12 01:45:08 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap() : _name("ScravTrap Undefined"),
						_hit_points(100),
						_energy_points(50),
						_attack_damage(20)
{std::cout << "Default ScravTrap constructor called" << std::endl;}

ScravTrap::ScravTrap(std::string name) :
						_name(name.empty() ? "ScravTrap Undefined" : name),
						_hit_points(100),
						_energy_points(50),
						_attack_damage(20)
{std::cout << "Default ScravTrap constructor called" << std::endl;}

ScravTrap::~ScravTrap(){std::cout << "Default ScravTrap destructor called" << std::endl;}

ScravTrap::ScravTrap(const ScravTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ScravTrap& ScravTrap::operator=(const ScravTrap& other)
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

void	ScravTrap::attack(const std::string& target)
{
	
}