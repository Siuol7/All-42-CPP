/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:19:20 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/15 14:21:36 by caonguye         ###   ########.fr       */
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
};