/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:57:14 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/02 21:02:48 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void	attack(void) const;
		void	setWeapon(Weapon weapon);

	private:
		std::string	_name;
		Weapon*		_weapon;
};