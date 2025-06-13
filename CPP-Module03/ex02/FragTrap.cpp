/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:34:20 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/13 23:51:49 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : _name("Undefined FragTrap"),
					   _hit_points(100),
					   _energy_points(100),
					   _attack_damage(30)
{std::cout << "Default FragTrap constructor called" << std::endl;}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;

}

FragTrap::~FragTrap(){std::cout << "Default FragTrap destructor called" << std::endl;}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
	std::cout << "FragTrap copy assignment called"
}