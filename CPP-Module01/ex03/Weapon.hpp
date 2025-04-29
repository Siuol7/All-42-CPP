/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:33:30 by caonguye          #+#    #+#             */
/*   Updated: 2025/04/29 16:18:44 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		void	setType(std::string type);
		std::string const &getType(void);

	private:
		std::string	_type;
};