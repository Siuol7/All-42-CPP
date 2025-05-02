/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:33:30 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/02 10:51:33 by caonguye         ###   ########.fr       */
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
