/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:19:20 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/13 10:44:44 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap
{
	public:
		ScravTrap();
		ScravTrap(std::string name);
		~ScravTrap() override;
		ScravTrap(const ScravTrap& other);
		ScravTrap& operator=(const ScravTrap& other);

		void	attack(const std::string& target) override;
		void	guardGate();

	private:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
};