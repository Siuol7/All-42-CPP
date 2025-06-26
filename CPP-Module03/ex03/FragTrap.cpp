/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:34:20 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/26 23:54:21 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "Undefined FragTrap";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	LOG_GREEN("FragTrap : Default constructor called");
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name.empty() ? "Undefined FragTrap" : name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	LOG_GREEN("FragTrap : Default constructor called");
}

FragTrap::~FragTrap(){LOG_GREEN("FragTrap : Default destructor called");}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	LOG_GREEN("FragTrap : Copy constructor called");
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	LOG_GREEN("FragTrap : Copy assignment called");
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

void	FragTrap::highFivesGuys(void)
{std::cout << "This is positive highFives" << std::endl;}