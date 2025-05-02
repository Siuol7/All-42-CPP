/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:06:51 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/02 19:54:10 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: _name(name.empty() ? "Undefined" : name),
	_weapon(weapon){}

void	HumanA::attack(void) const
{
	std::cout << _name << "attack with their" << _weapon.getType() << std::endl;
}
