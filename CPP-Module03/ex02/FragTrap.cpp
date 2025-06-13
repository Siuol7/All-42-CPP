/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:34:20 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/13 11:35:45 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : _name("Undefined FragTrap"),
					   _hit_points(100),
					   _energy_points(100),
					   _attack_damage(30)
{std::cout << "Default FragTrap constructor called" << std::endl;}