/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:15:24 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/02 11:23:11 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type.empty()? "Undefined" : type){};

void	Weapon::setType(std::string type)
{
	if (type.empty())
		_type = "Undefined";
	else
		_type = type;
}

const std::string &Weapon::getType(void)
{
	return (_type);
}
