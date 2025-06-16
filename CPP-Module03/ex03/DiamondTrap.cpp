/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:03:54 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/16 11:58:02 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScravTrap()
{
	this->_name = "Undefined DiamondTrap";
	this->_hit_points =	FragTrap::_hit_points;
	this->_energy_points = ScravTrap::_energy_points;
	this->_attack_damage =	FragTrap::_attack_damage;
};

DiamondTrap::DiamondTrap(const std::string name) :	ClapTrap(name + "_clap_name"),
													FragTrap(name),
													ScravTrap(name)
{
	this->_name = name;
};